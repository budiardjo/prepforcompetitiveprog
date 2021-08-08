#include "episode.h"
//reads episode data from the fi le with the given name
Episode::Episode(const string& filename) {
//attempt to open the fi le with the episode
	m_EpisodeFile.open(fi lename.c_str(), ios::in);
	if (m_EpisodeFile.fail())
//failed to open fi le
	{
		cout << "File " << filename
		cout << " could not be opened for reading." << endl;
		exit(1);
	}
//read episode name
	getline(m_EpisodeFile, m_Name);
}

//prints out introduction to the episode
void Episode::Introduce() {
	cout << "Get ready to play... " << m_Name;
	cout << endl << endl;
}

//tests whether there are questions left
bool Episode::IsOn() {
	return m_EpisodeFile.good();
}

//returns the next unasked question
Question Episode::NextQuestion() {
	return Question(m_EpisodeFile);
}