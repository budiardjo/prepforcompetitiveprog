#include <iostream>
using namespace std;
//forward declaration
class Board;

//Player class defi nition - for human player
class Player {
	public:
//default constructor
		Player();
//returns piece
		char GetPiece() const;
		void MakeMove(Board& aBoard) const; //makes move
		
	private:
//number of player pieces
		static const int NUM_PIECES = 2;
//player pieces
		static const char PIECES[NUM_PIECES];
//current piece number
		static int current;
		char m_Piece; //piece
};

const char Player::PIECES[NUM_PIECES] = {'X', 'O'};
int Player::current = 0;

//default constructor
Player::Player() {
	m_Piece = PIECES[current];
	current = (current + 1) % NUM_PIECES;
}

//returns piece
char Player::GetPiece() const {
	return m_Piece;
}

//makes move
void Player::MakeMove(Board& aBoard) const {
	int move;
//keep asking until get a legal move
	do {
		cout << "Player " << GetPiece();
		cout << ", where would you like to move? (0-8): ";
		cin >> move;
	} while (!aBoard.IsLegalMove(move));
//send the legal move to the board
	aBoard.ReceiveMove(GetPiece(), move);
}

//Board class defi nition - for Tic-Tac-Toe Board
class Board {
	public:
//default constructor
		Board();
//tests if is full
		bool IsFull() const;
//tests if a move is legal
		bool IsLegalMove(int move) const;
//tests if a player is winner
		bool IsWinner(char piece) const;
//displays board
		void Display() const;
//sets all squares to empty
		void Reset();
		void ReceiveMove(char piece, int move); //makes a move
//number of squares
		static const int NUM_SQUARES = 9;
//empty piece
		static const char EMPTY = ' ';
		
	private:
//number of winning combos
		static const int NUM_COMBOS = 8;
//number of squares in a combo
		static const int NUM_IN_COMBO = 3;
//winning combos
		static const int WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO];
		char m_Squares[NUM_SQUARES]; //squares
};

const int Board::WINNING_COMBOS[NUM_COMBOS][NUM_IN_COMBO] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

Board::Board() {
	Reset();
}

//tests if is full
bool Board::IsFull() const {
	bool full = true;
	int i = 0;
	while (full && i < NUM_SQUARES) {
		if (m_Squares[i] == EMPTY) {
			full = false;
		}
		++i;
	}
	return full;
}

//tests if a move is legal
bool Board::IsLegalMove(int move) const {
	return (move >= 0 && move < NUM_SQUARES && m_Squares[move] == EMPTY);
}

//tests if a player is winner
bool Board::IsWinner(char piece) const {
	bool winner = false;
	int i = 0;
	while (!winner && i < NUM_COMBOS) {
		int piecesInCombo = 0;
		for (int j = 0; j < NUM_IN_COMBO; ++j) {
			if (m_Squares[WINNING_COMBOS[i][j]] == piece) {
				++piecesInCombo;
			}
		}
		if (piecesInCombo == NUM_IN_COMBO) {
			winner = true;
		}
		++i;
	}
	return winner;
}

//displays board
void Board::Display() const {
	cout << endl << "\t" << m_Squares[0] << " | " << m_Squares[1];
	cout << " | " << m_Squares[2];
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << m_Squares[3] << " | " << m_Squares[4];
	cout << " | " << m_Squares[5];
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << m_Squares[6] << " | " << m_Squares[7];
	cout << " | " << m_Squares[8];
	cout << endl << endl;
}

//sets all squares to empty
void Board::Reset() {
	for (int i=0; i<NUM_SQUARES; ++i) {
		m_Squares[i] = EMPTY;
	}
}

//makes a move
void Board::ReceiveMove(char piece, int move) {
	m_Squares[move] = piece;
}

//Game class defi nition - for the game itself
class Game {
	public:
//default constructor
		Game();
//tests if game is still on
		bool IsPlaying() const;
//tests if game is tie
		bool IsTie() const;
//displays instructions
		void DisplayInstructions() const;
//sets current player number to next player number
		void NextPlayer();
//announces the winner
		void AnnounceWinner() const;
		void Play();
	private:
//number of players
		static const int NUM_PLAYERS = 2;
//fi rst player number
		static const int FIRST = 0;
//second player number
		static const int SECOND = 1;
		
		Board m_Board; //board
		Player m_Players[NUM_PLAYERS]; //players
//current player number
		int m_Current;
};

//default constructor
Game::Game():
	m_Current(FIRST)
{}

//tests if game is still on
bool Game::IsPlaying() const {
	return ( !m_Board.IsFull() && !m_Board.IsWinner(m_Players[FIRST].GetPiece()) && !m_Board.IsWinner(m_Players[SECOND].GetPiece()) );
	         
}

bool Game::IsTie() const {
	return ( m_Board.IsFull() && !m_Board.IsWinner(m_Players[FIRST].GetPiece()) && !m_Board.IsWinner(m_Players[SECOND].GetPiece()) );
	         
}

//displays instructions
void Game::DisplayInstructions() const {
	cout << "\tWelcome to the ultimate intellectual";
	cout << "showdown: Tic-Tac-Toe." << endl << endl;
	cout << "Make your move by entering a number, 0 - 8. The number" << endl;
	cout << "corresponds with board position, as illustrated:" << endl << endl;
	cout << endl << "\t" << "0 | 1 | 2";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "3 | 4 | 5";
	cout << endl << "\t" << "---------";
	cout << endl << "\t" << "6 | 7 | 8";
	cout << endl << endl;
	cout << "Prepare yourself. The battle is about to begin.";
	cout << endl << endl;
}

//sets current player number to next player number
void Game::NextPlayer() {
//increment current player number by one
//"wrap around" to 0, if necessary
	m_Current = (m_Current + 1) % NUM_PLAYERS;
}

//announces the winner
void Game::AnnounceWinner() const {
	cout << "The raging battle has come to a fi nal end.";
	cout << endl;
	if (IsTie()) {
		cout << "Sadly, no player emerged victorious.";
		cout << endl;
	} else {
		cout << "The winner of this climatic";
		cout << "confrontation is Player ";
		if (m_Board.IsWinner(m_Players[FIRST].GetPiece())) {
			cout << m_Players[FIRST].GetPiece() << "!";
			cout << endl;
		} else {
			cout << m_Players[SECOND].GetPiece() << "!";
			cout << endl;
		}
	}
}

//plays a game
void Game::Play() {
	m_Current = FIRST;
	m_Board.Reset();
	while (IsPlaying()) {
		m_Board.Display();
		m_Players[m_Current].MakeMove(m_Board);
		NextPlayer();
	}
	m_Board.Display();
	AnnounceWinner();
}

//main function
int main() {
	Game ticTacToe;
	ticTacToe.DisplayInstructions();
	char again;
	do {
		ticTacToe.Play();
		cout << endl << "Play again? (y/n): ";
		cin >> again;
	} while (again != 'n');
	return 0;
}