#include <hang.h>

int main()
{
	// Choose either 
	// Nouns, Adjectives, Verbs
	Hangman::chooseSetting();

	// The main loop
	Hangman::run();

	// Make the program to not close the app automatically 
	Hangman::stop();
}