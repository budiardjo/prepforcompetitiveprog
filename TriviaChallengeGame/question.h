// Trivia Challenge
// Question defi nition - class represents a single question
#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <fstream>
#include <istream>
#include <iostream>

using namespace std;


// Question class defi nition - for trivia question
class Question {
	public:
//number of possible answers
		static const int NUM_ANSWERS = 4;
//reads the question from the stream
		void Question(istream& episodeFile);
//displays the question and answers
		void Ask();
//scores an answer
		double ScoreAnswer(int answer);
		
		
	private:
//text for a correct answer
		static const string CORRECT;
//text for a wrong answer
		static const string WRONG;
//score for a correct answer
		static const int CORRECT_ANSWER_SCORE = 1000;
		//name of the category
		string m_Category;
//question text
		string m_Question;
//an array of the possible answers
		string m_Answers[NUM_ANSWERS];
//index of the correct answer
		int m_CorrectAnswer;
//reason why the answer is correct
		string m_Explanation;
};

#endif