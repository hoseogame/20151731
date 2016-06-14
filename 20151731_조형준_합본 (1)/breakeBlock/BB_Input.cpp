#include <Windows.h>
#include <conio.h>
#include "BB_BreakBlockGame.h"
#include "BB_Input.h"

namespace breakeBlock {
	char Input::inkey = NULL;
	KEY Input::lastKey = DEFAULT;
	KEY Input::KeyInput()
	{
		if (_kbhit())
		{
			inkey = _getch();

			switch (inkey)
			{
			case 'y':
			case 'Y':
				lastKey = Y;
				return Y;
			case 'n':
			case 'N':
				lastKey = N;
				return N;
			case 'j':
			case 'J':
				lastKey = J;
				return J;
			case 'k':
			case 'K':
				lastKey = K;
				return K;
			case 'l':
			case 'L':
				lastKey = L;
				return L;
			case 'i':
			case 'I':
				lastKey = I;
				return I;
			case '1':
				lastKey = ONE;
				return ONE;
			case '2':
				lastKey = TWO;
				return TWO;
			case '3':
				lastKey = THREE;
				return THREE;
			case SPACE:
				lastKey = SPACE;
				return SPACE;
			case DEFAULT:
			default:
				return DEFAULT;
			}
		}

		return DEFAULT;
	}

	KEY Input::GetLastKey()
	{
		return lastKey;
	}
}