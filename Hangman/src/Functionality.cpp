#include "Functionality.h"

namespace basic
{
	void clear()
	{
		system("cls");
	}

	int random(int min, int max)
	{
		std::default_random_engine generator;
		std::uniform_int_distribution<int> distribution(min, max);
		return distribution(generator);
	}
	bool checkIfExsit(std::string word, char ch)
	{

		return false;
	}
}