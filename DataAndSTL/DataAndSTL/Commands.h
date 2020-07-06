#pragma once

#include "DiceRoll.h"
#include "File.h"
#include "NumberConverter.h"


class Commands
{
public:
	Commands();
	~Commands();
	bool Initialize();
	bool NameDisplay();
	bool PrintCommand();
	
	void CommandList();
	void Update();

	bool Quit(bool tag);

private:
	DiceRoll m_diceRoll;
	NumberConverter m_numCon;

	
	std::string* m_name;

	bool m_isLoopRunning;

};