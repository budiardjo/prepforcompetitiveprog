#ifndef LIST_H
#define LIST_H
#include <string>
using namespace std;
class Node;
class List {
	public:
		List();
		~List();
//tests for element existence
		bool Contains(const string& data) const;
//returns number of elements
		int Count() const;
//displays elements
		void Display() const;
		//adds an element
		void Add(const string& data);
//removes an element
		bool Remove(const string& data);
//removes all elements
		void Clear();
	private:
		Node* m_pHead; //head (front) of list
		Node* m_pTail; //tail (end) of list
};
#endif