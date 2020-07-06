#pragma once

#include <vector>
#include <list>
#include <deque>
#include <map>
#include <stack>


class Containers
{
public:
	Containers();
	void PushVector();
	void PopVector();



private:
	std::vector<int> m_myVector;
	std::map<int, float> m_myMap;
	std::list<int> m_myList;
	std::deque<int> m_myDeque;
	std::stack<int> m_myStack;
};

