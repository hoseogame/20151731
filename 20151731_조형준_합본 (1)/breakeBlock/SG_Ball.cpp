#include <iostream>
#include "SG_Ball.h"
#include "SG_Utility.h"
using namespace std;
namespace ShootGoal
{
	Ball::Ball(int x, int y) : Object(x, y, "¢Á", BALL), isShoot(false)
	{}

	Ball::~Ball()
	{}

	void Ball::DoAction(KEY key)
	{
		switch (key)
		{
		case K:
			isShoot = true;
			break;
		}

		if (isShoot)
		{
			SetPotion(GetPotion().x, GetPotion().y - 1);
			Utility::gotoxy(GetPotion().x, GetPotion().y + 1);
			cout << " ";
		}
		if (0 >= GetPotion().y)
			isShoot = false;
	}
}