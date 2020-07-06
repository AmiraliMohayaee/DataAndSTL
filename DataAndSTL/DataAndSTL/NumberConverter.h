#pragma once

#include <string>


class NumberConverter
{
public:
	NumberConverter();
	std::string DecToBin();
	std::string DecToHex(const std::string num);
	std::string BinToDec(const std::string num);
	std::string BinToHex(const std::string num);
	std::string HexToDec(const std::string num);
	std::string HexToBin(const std::string num);


private:

};