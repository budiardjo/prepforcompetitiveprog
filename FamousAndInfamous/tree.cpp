#include "tree.h"
#include <iostream>
#include <string>
#include "node.h"
using namespace std;

//builds minimal starting tree
Tree::Tree() {
	Node* pNodeGandhi = new Node("Are you thinking of Gandhi?", NULL, NULL);
	Node* pNodeSanta = new Node("Are you thinking of Santa Claus?", NULL, NULL);
	Node* pNodeQuestion = new Node("Is/was the person real?", pNodeGandhi,
	                               pNodeSanta);
	m_pRoot = pNodeQuestion;
	m_pCurrent = m_pRoot;
	m_pCurrentParent = NULL;
}

Tree::~Tree() {
	Delete(m_pRoot);
}

void Tree::Reset() {
	m_pCurrent = m_pRoot;
	m_pCurrentParent = NULL;
}

void Tree::Delete(Node* pNode) {
	if (pNode != NULL) {
		Delete(pNode->m_pYes); //recursive call
		Delete(pNode->m_pNo); //recursive call
		delete pNode;
		pNode = NULL;
	}
}

bool Tree::DisplayCurrentQuestion() {
//never called when m_pCurrent is NULL, but just in case...
	if (m_pCurrent == NULL) {
		return false;
	}
	cout << m_pCurrent->m_Question;
	return (!m_pCurrent->IsFinalQuestion());
}

void Tree::NextQuestion(char answer) {
//never called when m_pCurrent is NULL, but just in case...

	if (m_pCurrent == NULL) {
		return;
	}
//never called when m_pCurrent points to fi nal  question, just in case...

	if (m_pCurrent->IsFinalQuestion()) {
		return;
	}
	m_pCurrentParent = m_pCurrent;
	if (answer == YES) {
		m_pCurrent = m_pCurrent->m_pYes;
	} else {
		m_pCurrent = m_pCurrent->m_pNo;
	}
}

void Tree::AddPerson() {
//get name of new person
	cout << "Who are you thinking of?: ";
	string name;
	cin.ignore();
	getline(cin, name);
//get question to distinguish new person
	cout << "What question would distinguish these two people?:" << endl;

	string question;
	getline(cin, question);

	//create new nodes
	Node* pNodePerson = new Node("Are you thinking of " + name + "?", NULL, NULL);
	Node* pNodeQuestion = new Node(question, NULL, NULL);
	char answer = AskYesNo("What would the answer be for " + name + "?");

//connect new question node to new person node
	if (answer == YES) {
		pNodeQuestion->m_pYes = pNodePerson;
		pNodeQuestion->m_pNo = m_pCurrent;
	} else {
		pNodeQuestion->m_pYes = m_pCurrent;
		pNodeQuestion->m_pNo = pNodePerson;
	}

	if (m_pCurrentParent->m_pYes == m_pCurrent) {
		m_pCurrentParent->m_pYes = pNodeQuestion;
	} else {
		m_pCurrentParent->m_pNo = pNodeQuestion;
	}
}

char Tree::AskYesNo(const string& question) {
	char response;
	do {
		cout << question;
		cout << " (" << YES << "/" << NO << "): ";
		cin >> response;
	} while (response != YES && response != NO);
	return response;
}

