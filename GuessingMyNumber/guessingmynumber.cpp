#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
 //seed rand num generator
 srand(static_cast<unsigned int>(time(0)));
 //max possible secret number
 const int MAX_NUMBER = 100;
 //rand num between 1-100
 int secretNumber = (rand() % MAX_NUMBER) + 1;

 int tries = 0; //number of times player has guessed
 int guess; //player's current guess

 cout << "\tWelcome to Guess My Number" << endl << endl;
 cout << "Guess my secret number between 1 and ";
 cout << MAX_NUMBER << "." << endl << endl;

 //guessing loop
 do
 {
 cout << "Enter a guess: ";
 cin >> guess;
 ++tries;
 if (guess > secretNumber)
 {
 cout << "Too high!" << endl << endl;
 }
 if (guess < secretNumber)
 {
 cout << "Too low!" << endl << endl;
 }
 } while (guess != secretNumber);


 cout << endl;
 cout << "You win! You got it in " << tries << " tries!";
 cout << endl;
 return 0;
}
