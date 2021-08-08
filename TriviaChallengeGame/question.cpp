#include "question.h"
//text for a correct answer
const string Question::CORRECT = "Correct!";
//text for a wrong answer
const string Question::WRONG = "Wrong!";

//reads the question from a stream
void Question::Question(istream& episodeFile) {
//read in the 8 lines that form a question
	getline(episodeFile,m_Category);
	getline(episodeFile,m_Question);
	for (int i = 0; i < NUM_ANSWERS; i++) {
		getline(episodeFile,m_Answers[i]);
	}
	episodeFile >> m_CorrectAnswer;
	episodeFile.ignore();
	getline(episodeFile,m_Explanation);

	for (size_t i=0; i<m_Question.length(); ++i) {
		if (m_Question[i] == '/') {
			m_Question[i] = '\n';
		}
	}

	for (size_t i=0; i<m_Explanation.length(); ++i) {
		if (m_Explanation[i] == '/') {
			m_Explanation[i] = '\n';
		}
	}
}

void Question::Ask() {
//display question and 4 answers with numbers
	cout << m_Category << endl;
	cout << m_Question << endl;
	for (int i = 0; i < NUM_ANSWERS; i++) {
		cout << i+1 << ") " << m_Answers[i] << endl;
	}
}

int Question::ScoreAnswer(int answer) {
	int score;
	if (answer == m_CorrectAnswer) {
		cout << CORRECT << endl;
		score = CORRECT_ANSWER_SCORE;
	} else {
		cout << WRONG << endl;
		score = 0;
	}
	cout << m_Explanation;
	cout << endl << endl;
	return score;
}