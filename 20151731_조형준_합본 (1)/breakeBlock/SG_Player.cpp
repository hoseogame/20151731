#include "SG_Player.h"
#include <iostream>

using namespace std;
namespace ShootGoal
{
	Player::Player() : Object(22, 22, "¦±¦¬¡Ü¦¬¦°", PLAYER)
	{}

	Player::~Player()
	{}

	void Player::DoAction(KEY key)
	{
		switch (key)
		{
		case J:
			if (GetPotion().x > 7)
				SetPotion(GetPotion().x - 1, 22);
			break;
		case L:
			if (GetPotion().x < 39)
				SetPotion(GetPotion().x + 1, 22);
			break;
		}
	}
}