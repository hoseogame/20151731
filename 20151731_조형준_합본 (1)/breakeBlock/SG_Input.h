#pragma once
#include "SG_ShootGoalGame.h"
namespace ShootGoal
{
	enum KEY
	{
		Y = 89, N = 78, J = 74, K, L, SPACE = 32, DEFAULT = 0
	};

	class Input
	{
	private:
		static char inkey;
		Input();
		~Input();
	public:
		static KEY KeyInput();
	};
}