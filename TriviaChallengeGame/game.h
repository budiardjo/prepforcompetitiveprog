// Trivia Challenge
// Game defi nition - class represents a single game
#ifndef GAME_H
#define GAME_H
#include <istream>
#include <iostream>
#include <iomanip>
#include "episode.h"
// Game class defi nition - for the game itself
class Game {
	public:
		Game();
//displays game instructions
		void DisplayInstructions() const;
//receives input from the player
		int GetMenuResponse(int numChoices);
//asks and scores the question
		int AskQuestion(Question& question);
//sends score to stream
		void SendScore(ostream& os);
//plays a game
		void Play();

	private:
//episode for this game
		Episode m_Episode;
//current score
		int m_Score;
};
#endif