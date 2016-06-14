#include <iostream>
#include "BB_PlayerBar.h"
#include "BB_Utility.h"
using namespace std;
namespace breakeBlock {
	PlayerBar::PlayerBar(int _x, int _y) : Object(_x, _y, PLAYERBAR)
	{}
	void PlayerBar::CollisionCheck(Object* obj)
	{
	}
	void PlayerBar::DoAction(KEY key)
	{
		switch (key)
		{
		case J:
			if (GetPos().GetX() - 2 >= 2)
				GetPos().SetX(GetPos().GetX() - 2);
			break;
		case K:
			break;
		case L:
			if (GetPos().GetX() + 2 <= 36)
				GetPos().SetX(GetPos().GetX() + 2);
			break;
		case I:

			break;
		case ONE:

			break;
		case TWO:

			break;
		case THREE:

			break;
		case DEFAULT:
		default:
			return;
		}
	}
	void PlayerBar::DrawThis()
	{
		Utility::gotoxy(GetPos().GetX() - 2, GetPos().GetY());
		if (GetPos().GetX() == 2)
			cout << "\b¦­¢Ã¢Ã¢Ã ";
		else if (GetPos().GetX() == 36)
			cout << "  ¢Ã¢Ã¢Ã¦­";
		else
			cout << "  ¢Ã¢Ã¢Ã  ";

	}
	PlayerBar::~PlayerBar()
	{}
}