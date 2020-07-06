#include <iostream>
#include "Commands.h"
#include "NumberConverter.h"
#include "DiceRoll.h"
#include "Hangman.h"


int main()
{
	NumberConverter converter;
	DiceRoll roll;
	Commands cmnd;
	Hangman hangMan;

	cmnd.NameDisplay();
	//cmnd.Update();
	// Guess loop has some logical problems, will
	// get back to it
	hangMan.GuessLoop();

	std::cout << "Thanks for using my program :)" << std::endl;
	system("pause");

	return 0;
}
