#include "DiceRoll.h"
#include <random>
#include <time.h>
#include <iostream>


DiceRoll::DiceRoll()
{
	m_command = "";
}

std::string DiceRoll::Roll20()
{
	m_command.clear();
	std::string command;
	std::string dice;
	std::string bonus;

	//std::cout << "Ready to roll dice" << std::endl;
	std::cout << "Type a line: ";
	std::getline(std::cin, command);

	if (m_command.empty())
	{
		if (command[0] == '/' && command[1] == 'r')
		{
			if (command.size() < 3)
			{
				std::cout << "Roll command Incomplete. Please follow the command with a " <<
					"space follow by the dice roll (i.e. 'd20')" << std::endl;
			}
			else
			{
				// Offset from the third element, counting three letters, including the
				// dice and the number of sides (e.g. d20, d6, etc.)
				dice = command.substr(3, 3);

				if (dice[0] == 'd' && (dice[1] == '2'))
				{
					std::cout << "Rolling Dice" << std::endl;
					std::cout << "How much is your bonus? (Please enter a number): ";
					std::cin >> bonus;
					m_command = ReturnRand(std::stoi(bonus));
				}
				else
				{
					std::cout << "Incorrect command" << std::endl;
				}
			}
		}
		else
		{
			std::cout << "Incorrect command initializer. Please try again." << std::endl;
		}

		std::cout << "Total length of the string recieved is: " << command.length() << std::endl;

		std::cout << std::endl;
	}

	return m_command;
}

int DiceRoll::ReturnRand(int bonus)
{
	int result;

	srand(time(0));

	result = rand() % 20;
	result += bonus;

	if (result >= 20)
	{
		result = 20;
	}

	std::cout << "You Rolled: " << " + " << bonus;
	//std::cout << result << std::endl;
	return result;
}
