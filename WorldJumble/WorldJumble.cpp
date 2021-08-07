#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(static_cast<unsigned int>(time(0)));
   //possible words to jumble

   const int NUM_WORDS = 5;
   const string WORDS[NUM_WORDS] =
   {
   "wall",
   "glasses",
   "labored",
   "persistent",
   "jumble"
   };

     //random index number
   int choice = (rand() % NUM_WORDS);
   //word player must guess
   string secretWord = WORDS[choice];

     //jumbled version of word
   string jumbled = secretWord;
   //num characters in jumbled
   size_t length = jumbled.size();
   //mix up letters in jumbled
   for (size_t i=0; i<length; ++i)

   {
   //swap letter at index i with letter at random index
   size_t randomIndex = (rand() % length); //rand
   char temp = jumbled[i];
   jumbled[i] = jumbled[randomIndex];
   jumbled[randomIndex] = temp;
   }


     //welcome player and explain game
   cout << "\t\t\tWelcome to Word Jumble!";
   cout << endl << endl;
   cout << "Unscramble the letters to make a word.";
   cout << endl;
   cout << "Enter 'quit' to quit the game.";
   cout << endl << endl;
   cout << "The jumble is: " << jumbled;

     //guessing loop
   string guess; //player's guess
   do
   {
   cout << endl << endl << "Your guess: ";
   cin >> guess;

   if ((guess != secretWord) && (guess != "quit"))
   {
   cout << "Sorry, that's not it.";
   }
   } while ((guess != secretWord) && (guess != "quit"));

   //do loop can end without correct guess, so check guess
   if (guess == secretWord)
   cout << endl << "That's it! You guessed it!" << endl;
   cout << endl << "Thanks for playing." << endl;
   return 0;
};
