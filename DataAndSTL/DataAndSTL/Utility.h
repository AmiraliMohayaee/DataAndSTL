#pragma once

#include <Windows.h>
#include <string>


namespace Utility
{
	// Screen specific functions
	void ChangeTextColor(int color);
	void ChangeTextRandomColor();
	void ClearScreen();
	void ResizeWindow(int width, int height);

	// File-specific functions
	bool WriteToFile(std::string writing);
	bool ReadFile(const std::string filename);
	bool SaveName(std::string name);
	const std::string GetSavedName();
}