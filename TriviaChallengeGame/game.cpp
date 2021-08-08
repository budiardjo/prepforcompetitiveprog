// Trivia Challenge
// Game implementation - class represents a single game
#include "game.h"
Game::Game() :
	m_Episode("trivia.txt")
{}

//displays game instructions
void Game::DisplayInstructions() const {
	cout << "\tWelcome to Trivia Challenge!";
	cout << endl << endl;
	cout << "Correctly answer as many questions as possible." << endl;
	cout << "You earn 1,000 points for each one you get right.";
	cout << endl << endl;
}

//receives input from the player
int Game::GetMenuResponse(int numChoices)

{
	int response;
//read the user's choice (must be valid)
	do {
		cout << "Enter your choice: ";
		cin >> response;
	} while(cin.good() && (response < 1 || response > numChoices));
	                       
	if (cin.fail()) { //exit if there was a problem
		cout << endl << "Goodbye!" << endl;
		exit(1);
	}
	cout << endl;
	return response;
}

//asks the question and returns the score
double Game::AskQuestion(Question& question) {
	int response;
	question.Ask();
	response = GetMenuResponse(Question::NUM_ANSWERS);
	return question.ScoreAnswer(response);
}

//display the player's score to the given stream
void Game::SendScore(ostream& os) {
	os << "Your final score is " << m_Score << ".";
	cout << endl;
}

//plays a game
void Game::Play() {
	m_Score = 0;
	m_Episode.Introduce();
//keep asking questions while there are more left
	while(m_Episode.IsOn()) {
		Question question = m_Episode.NextQuestion();
		m_Score += AskQuestion(question);
	}
//display score
	SendScore(cout);
//write score
	ofstream scoreFile("trivia_scores.txt", ios::out | ios::app);
	SendScore(scoreFile);
	scoreFile.close();
}
