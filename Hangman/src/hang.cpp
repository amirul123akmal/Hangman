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
		stage episode;
		loadChoices();
		basic::clear();
		
		#if _DEBUG
			for (const std::string haha : list)
			{
				std::cout << haha << std::endl;;
			}
		#endif
		
		// Get random word
		std::string theWord = list[basic::random(0, list.size() - 1)];

		for (int i = 0; i < 5; i++)
		{
			episode.chooseStage(i);
			for (int j = 0; j < theWord.size(); j++)
			{
				printf("*");
			}
		}
	}
}