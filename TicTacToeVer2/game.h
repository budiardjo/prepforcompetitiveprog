// Tic-Tac-Toe 2.0 - multiple fi les
// Game defi nition - class represents a tic-tac-toe game
//part of include guard - tests if PLAYER_H not defi ned
#ifndef GAME_H
//part of include guard - defi nes PLAYER_H
#define GAME_H
//for access to Board class defi nition
#include "board.h"
//for access to Player class defi nition
#include "player.h"
class Game {
	public:
		Game();
		bool IsPlaying() const;
		bool IsTie() const;
		void DisplayInstructions() const;
		void NextPlayer();
		void AnnounceWinner() const;
		void Play();
	private:
		static const int NUM_PLAYERS = 2;
		static const int FIRST = 0;
		static const int SECOND = 1;
		Board m_Board;
		Player m_Players[NUM_PLAYERS];
		int m_Current;
};
//part of include guard - ends #ifndef
#endif