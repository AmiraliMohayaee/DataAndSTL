#pragma once

#include "Utility.h"
#include <string>
#include <vector>


class Hangman
{
public:
	Hangman();
	bool SetupDictionary();
	std::string GetRand();
	bool GuessLoop();


private:
	bool m_isDictionarySet;

	std::string m_guess;
	std::vector<std::string> m_dictionary;
};

