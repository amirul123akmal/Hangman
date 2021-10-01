#include "Functionality.h"

namespace basic
{
	void clear()
	{
		system("cls");
	}

	int random(int min, int max)
	{
		std::random_device random;
		std::mt19937 mt(random());
		std::uniform_real_distribution<float> dist(min, max);
		
		return (int)dist(mt) ;
	}
	bool ifExsit(std::string word, char ch)
	{
		for (int i = 0 ; i < word.size() ; i++)
		{
			if (word[i] == ch)
			{
				return true;
			}
		}
		return false;
	}
	std::vector<char> replace(std::string word,  std::vector<char> list, char ch)
	{
		for (int i = 0; i < list.size() - 1 ;i++)
		{
			if (word[i] == ch)
			{
				list[i] = ch;
			}
		}
		return list;
	}
	bool comparison(std::vector<char> a1)
	{
		for (int i = 0; i< a1.size() - 1;i++)
		{
			if (a1[i] == '*')
			{
				return false;
			}
		}
		return true;
	}
	void printColored(std::string sentence, int color, bool nextline)
	{
		switch (color)
		{
		case 1:
			printf("\033[0;31m");
			break;
		case 2:
			printf("\033[0;34m");
			break;
		case 3:
			printf("\033[0;32m");
			break;
		default:
			break;
		}
		printf("%s", sentence.c_str());
		if (nextline)
		{
			printf("\n");
		}
		printf("\033[0;37m");
	}
	void printIt(std::vector<char> name)
	{
		for(int i = 0;i < name.size() - 1 ;i++)
		{
			std::cout << name[i];
		}
	}
}