#include <string>
#include <vector>
#include <fstream>
#include <sstream>

#include "stages.h"
#include "Functionality.h"

namespace Hangman
{
	// default is 1 ( nouns )
	// there are nouns, adjectives and verbs
	static int userChoice = 1;
	static std::ifstream file;
	static std::vector<std::string> list{};

	static void loadWord();
	static void loadChoices();
	
	void chooseSetting();
	void run();
}