#pragma once

class MiniGame
{
public:
	virtual void Run() = 0;
	MiniGame() = default;
	~MiniGame() = default;
};

