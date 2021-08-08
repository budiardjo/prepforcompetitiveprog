// Tic-Tac-Toe 2.0 - multiple fi les
// Player defi nition - class represents a tic-tac-toe player
//part of include guard - tests if PLAYER_H not defi ned
#ifndef PLAYER_H
//part of include guard - defi nes PLAYER_H
#define PLAYER_H
//forward declaration of Board class
class Board;
class Player {
	public:
		Player();
		char GetPiece() const;
		void MakeMove(Board& aBoard) const;
	private:
		static const int NUM_PIECES = 2;
		static const char PIECES[NUM_PIECES];
		static int current;
		char m_Piece;
};
//part of include guard - ends #ifndef
#endif