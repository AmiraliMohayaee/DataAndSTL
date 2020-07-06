#pragma once

#include <vector>


class StateManager
{
public:
	virtual ~StateManager() = 0 {}

	virtual bool Initialize() = 0;
	virtual bool Draw() = 0;
	virtual bool Enter() = 0;
	virtual bool Quit() = 0;

protected: 

	std::vector<StateManager*> m_stateCollection;

};