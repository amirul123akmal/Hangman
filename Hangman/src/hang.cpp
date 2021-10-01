#include "hang.h"

namespace Hangman
{
	void chooseSetting()
	{
		basic::clear();
		printf("1. Nouns\n");
		printf("2. Adjectives\n");
		printf("3. Verbs\n:");
		std::cin >> userChoice;
	}

	void loadWord()
	{
		std::string line{}, temp{};
		int counter = 0, counterAttack = 0;;
		while (!file.eof())
		{
		here:
			counter++;
			std::getline(file, line);
			if (counter < 4)
			{
				goto here;
			}
			std::stringstream separated(line);
			while (std::getline(separated, temp, ';'))
			{
				if (counterAttack == 1)
				{
					list.push_back(temp);
					counterAttack = 0;
					break;
				}
				counterAttack++;
			}
		}
	}
	void loadChoices()
	{
		// to read the file
		// need to skip the first 4 lines
		
		switch (userChoice)
		{
		case 1:
			file.open("res/list/nouns.csv", std::ios::in);
			loadWord();
			break;
		case 2:
			file.open("res/list/adjectives.csv", std::ios::in);
			loadWord();
			break;
		case 3:
			file.open("res/list/verbs.csv", std::ios::in);
			loadWord();
			break;
		default:
			break;
		}
		file.close();
	}

	void run()
	{
		std::vector<char> hint{};
		char guess;

		// initialize all the stages availibility to this function
		stage episode;

		// loadd all the text into array
		loadChoices();

		// Get random word
		std::string theWord = list[basic::random(1, list.size() - 2)];
		// Give players hint how many character in that alphabets
		for (int i = 0;i <= theWord.size();i++)
		{
			hint.push_back('*');
		}

		for (int i = 0; i < 5; i++)
		{
		same:
			episode.chooseStage(i + 1);
			basic::printIt(hint);
			if (basic::comparison(hint))
			{
				goto win;
			}
			basic::printColored("\nInsert your guess here:", 2, false);
			std::cin >> guess;
			if (basic::ifExsit(theWord, guess))
			{
				hint = basic::replace(theWord, hint, guess);
				goto same;
			}
		}
		// lose 
		basic::printColored("The Man are dead, try again", 1, true);
		basic::printColored("The answer is "+theWord, 1, true);
		goto end;
	win:
		basic::printColored("\n\nCongratulation, you saved that man live", 3, true);
	end:
		printf("");
	}
}