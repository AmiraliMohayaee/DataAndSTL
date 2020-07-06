#include "Utility.h"
#include <iostream>
#include <fstream>


namespace Utility
{
	void ChangeTextColor(int color)
	{
		HANDLE hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(hConsole, color);
	}

	void ChangeTextRandomColor()
	{
		HANDLE hConsole;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		SetConsoleTextAttribute(hConsole, ((rand() % 15) + 1));
	}

	void ClearScreen()
	{
		system("cls");
	}

	void ResizeWindow(int width, int height)
	{
		HWND handle = GetConsoleWindow();
		RECT r;
		GetWindowRect(handle, &r); //stores the console's current dimensions

		//MoveWindow(window_handle, x, y, width, height, redraw_window);
		MoveWindow(handle, r.left, r.top, width, height, FALSE);
	}

	bool WriteToFile(std::string writing)
	{
		return false;
	}

	bool ReadFile(const std::string filename)
	{
		return false;
	}

	bool SaveName(std::string name)
	{
		std::ofstream fileInput;
		fileInput.open("name.txt", std::ios_base::out);

		if (fileInput.is_open())
		{
			// Attempting to input name into file
			fileInput << name;
		}
		else
		{
			std::cout << "Error. File could not be accessed." << std::endl;
			return false;
		}

		fileInput.close();
		return true;
	}

	const std::string GetSavedName()
	{
		std::string name;

		std::ifstream fileInput;
		fileInput.open("name.txt", std::ios_base::in);

		if (fileInput.fail())
		{
			std::cout << "Error. File could not be accessed." << std::endl;
		}

		while (!fileInput.eof())
		{
			// Getting the string from file
			std::getline(fileInput, name);
			//fileInput >> name;
		}

		fileInput.close();

		return name;
	}
}