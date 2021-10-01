#include <iostream>
#include <random>

namespace basic
{
	void printIt(std::vector<char> name);


	void clear();
	int random(int min, int max);
	bool ifExsit(std::string word, char ch);
	std::vector<char> replace(std::string word, std::vector<char> list, char ch);
	bool comparison(std::vector<char> a1);

	/// <summary>
	/// 1 = red, 2 = blue, 3 = green
	/// 
	/// </summary>
	/// <param name="sentence"></param>
	/// <param name="color"></param>
	/// <param name="nextline"></param>
	void printColored(std::string sentence, int color, bool nextline);
}
