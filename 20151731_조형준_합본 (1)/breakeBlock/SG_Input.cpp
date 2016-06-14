#include <Windows.h>
#include <conio.h>
#include "SG_ShootGoalGame.h"
#include "SG_Input.h"
namespace ShootGoal
{
	char Input::inkey = NULL;

	KEY Input::KeyInput()
	{
		if (_kbhit())
		{
			inkey = _getch();

			switch (inkey)
			{
			case 'j':
			case 'J':
				return J;

			case 'k':
			case 'K':
				return K;

			case 'l':
			case 'L':
				return L;

			case 'y':
			case 'Y':
				return Y;

			case 'n':
			case 'N':
				return N;

			case SPACE:
				return SPACE;

			default:
				return DEFAULT;
			}
		}

		return DEFAULT;
	}
}