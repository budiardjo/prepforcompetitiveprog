#ifndef EPISODE_H
#define EPISODE_H

#include <string>
#include <fstream>
#include <iostream>

#include "question.h"

// Episode class defi nition - for trivia episode
class Episode {
	public:
//reads episode data from the fi le with the given name
		
		Episode(const string& filename);
//displays episode introduction
		void Introduce();
//tests if the episode is still on
		bool IsOn();
//returns the next question
		Question NextQuestion();
	private:
//name of the episode
		string m_Name;
//episode data fi le
		ifstream m_EpisodeFile;
};
#endif