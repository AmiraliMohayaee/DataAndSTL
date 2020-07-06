#include "Commands.h"
#include "Utility.h"
#include <iostream>
#include <string>

Commands::Commands()
{
	m_name = new std::string;
	m_isLoopRunning = true;
}

Commands::~Commands()
{
	delete m_name;
}

bool Commands::Initialize()
{
	return false;
}

bool Commands::NameDisplay()
{
	std::string tempName;
	tempName = Utility::GetSavedName();


	if (m_name->empty())
	{
		while (m_name->empty())
		{
			std::cout << "Hello! Please enter your name: ";
			std::getline(std::cin, *m_name);
		}

		std::cout << "Hello " << *m_name << " wellcome to my program :)" << std::endl;
		Utility::SaveName(*m_name);
	}
	else
	{
		std::cout << "There is already a name in memory. Welcome back " <<
			*m_name << "." << std::endl;
		return false;
	}

	//m_name = tempName;

	return true;
}

void Commands::CommandList()
{
	
}

bool Commands::PrintCommand()
{
	return false;
}

void Commands::Update()
{

	while (m_isLoopRunning)
	{
		std::cout << R"(
			++TITLE++
		)" << std::endl;



		//converter.DecToBin();

		//text = roll.Roll20();
		//std::cout << text;



		system("pause");
	}
}

bool Commands::Quit(bool tag)
{ 
	return false;
}
