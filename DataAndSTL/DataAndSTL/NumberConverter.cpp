#include "NumberConverter.h"
#include <iostream>

NumberConverter::NumberConverter()
{

}

std::string NumberConverter::DecToBin()
{
	std::string num = "";
	std::string result;
	int baseCount = 0;

	std::cout << "Enter your binary number: ";
	std::getline(std::cin, num);

	for (int i = 0; i > std::stoi(num); i++)
	{	
		
		baseCount++;
	}

	std::cout << result;
	return result;
}

std::string NumberConverter::DecToHex(const std::string num)
{
	std::string result;

	
	return result;
}

std::string NumberConverter::BinToDec(const std::string num)
{
	return std::string();
}

std::string NumberConverter::BinToHex(const std::string num)
{
	return std::string();
}

std::string NumberConverter::HexToDec(const std::string num)
{
	return std::string();
}

std::string NumberConverter::HexToBin(const std::string num)
{
	return std::string();
}
