#include "Hangman.h"
#include <fstream>
#include <random>
#include <iostream>
#include <time.h>
#include <algorithm>


Hangman::Hangman()
{
	m_isDictionarySet = false;
}

bool Hangman::SetupDictionary()
{
	// Opening file to get values from our dictionary file
	// into
	std::fstream file;
	file.open("dictionary.txt", std::ios_base::in);
	std::string tempWords;

	if (file.fail())
	{
		std::cout << "File could not be read, possible error." << std::endl;
		return false;
	}

	// Looping through the file to input the word from every
	// line into the container
	while (!file.eof())
	{
		std::getline(file, tempWords);
		m_dictionary.push_back(tempWords);
	}

	// Closing the file as we don't need any more access after
	// copying all elements
	file.close();
	m_isDictionarySet = true;
	return true;
}

std::string Hangman::GetRand()
{
	if (!m_isDictionarySet)
	{
		SetupDictionary();
	}

	// Running a random check through elements stored in
	// the dictionary to pick a random word for hangman
	srand(time(NULL));
	int target = rand() % m_dictionary.size();

	// Printing out for testing
	//std::cout << m_dictionary[target];

	return m_dictionary[target];
}


bool Hangman::GuessLoop()
{
	bool IsWordGuessed = false;
	int numOfGuesses = 5;

	// Setting up a temporary string copy for the word
	// and obfuscating it
	std::string correctWord = GetRand();
	std::string guess = "";
	unsigned int size = correctWord.size();
	guess.resize(size);
	std::cout << "Guess has " << guess.size() << " elements";
	
	// Getting the size of our temporary string for storing
	// the hidden word
	for (int i = 0; i < guess.size(); i++)
	{
		guess[i] = '*';
	}


	while (!IsWordGuessed)
	{
		// Clear screen after ever attempt
		Utility::ClearScreen();

		std::cout << "This Hangman will challenge your knowledge." << std::endl;
		std::cout << "You have a maximum number of " << numOfGuesses << " guesses." << std::endl;
		std::cout << "Can you guess what the secret word is?" << std::endl;
		std::cout << "The word is: " << guess << std::endl;

		if (numOfGuesses != 0)
		{
			std::string userLetter;
			std::cout << "Enter a letter you think is in the word: ";
			std::cin >> userLetter;

			// Getting the multiple positions of the word
			//std::size_t pos;
			

			for (auto it = correctWord.begin(); it != correctWord.end(); it++)
			{
				if (correctWord.find(userLetter) == 0)
				{
					// Decrementing num of guesses after every attempt
					std::cout << "You got a letter right" << std::endl;
					numOfGuesses--;
				}
				else
				{
					std::cout << "You guess right" << std::endl;
				}
			}

			// If they guess right, return true
			return true;
		}
		else
		{
			std::cout << "You couldn't guess the correct word. The word is (" << correctWord << ")." << std::endl;
			// Erasing the container in case there is a need to 
			// restart with another word
			correctWord.erase();
			return false;
		}
	}
}
