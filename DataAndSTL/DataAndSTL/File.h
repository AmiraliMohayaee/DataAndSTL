#pragma once

#include <iostream>
#include <fstream>
#include <string>


class File
{
public:
	bool WriteToFile(std::string writing);
	bool ReadFile(const std::string filename);	

private:
	std::fstream m_openFile;
	std::string m_fileString;
};