#pragma once


#include <string>
#include <map>

class DiceRoll
{
public:
	DiceRoll();
	std::string Roll20();
	int ReturnRand(int bonus);

private:
	std::string m_command;
	std::map<int, std::string> m_myMap;

};