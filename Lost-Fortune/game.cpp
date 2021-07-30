#include <iostream>
#include <string>

using namespace std;

int main()
{
//define constant
const int GOLD_PIECES = 900;

//declare variables
string leader; //last name of leader
int adventurers; //number of adventurers that begin journey
int killed; //number of adventurers killed

//get values
cout << "\tWelcome to Lost Fortune" << endl << endl;
cout << "Please enter the following for a personalized adventure.";
cout << endl << endl;
cout << "Enter your last name: ";
cin >> leader;
cout << "Enter a positive number: ";
cin >> adventurers;
cout << "Enter a positive number, less than the fi rst: ";
cin >> killed;


//calculate new values
int survivors = adventurers - killed;
int extraGoldPieces = GOLD_PIECES % survivors;


//tell the story
cout << endl;
cout << "The brave " << leader << " led a group of " << adventurers;

cout << " adventurers on a quest." << endl;
cout << "They fought a band of ogres and lost " << killed << "... only ";
cout << survivors << " survived." << endl;
cout << "The party was about to give up when they stumbled upon a" << endl;

cout << "buried fortune of " << GOLD_PIECES << " gold pieces. ";

cout << "They split the loot and" << endl;
cout << leader << " kept the extra " << extraGoldPieces << " gold piece(s)";
cout << "to keep things fair." << endl;
return 0;
}
