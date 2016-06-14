#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "BB_Ball.h"
#include "BB_Utility.h"
#include "BB_StageManager.h"
using namespace std;
namespace breakeBlock {
	Ball::Ball(int _x, int _y) : Object(_x, _y, BALL), isHold(true), isCanHold(true), dir(UP)
	{
		ballSpeed = GetTickCount() + 25;
		srand(time(NULL));
	}
	void Ball::CollisionCheck(Object* obj)
	{
		if (!obj)
			return;

		if (obj->GetType() == PLAYERBAR)
		{
			if (GetPos().GetY() == 20 &&
				GetPos().GetX() >= obj->GetPos().GetX() &&
				GetPos().GetX() <= obj->GetPos().GetX() + 6)
				isCanHold = true;
			else
				isCanHold = false;

			if (GetPos().GetY() >= 21 &&
				GetPos().GetX() >= obj->GetPos().GetX() &&
				GetPos().GetX() <= obj->GetPos().GetX() + 6)
			{
				GetPos().SetY(20);
				SetDirection(obj);
			}
		}

		if (obj->GetType() == BLOCK)
		{
			if (GetPos() == obj->GetPos())
			{
				SetDirection(obj);
				obj->GetPos().SetX(50);
				obj->GetPos().SetY(1);
				obj->SetisActive(false);
				StageManager::GetInstance()->AddKillCount();
			}
		}

		if (GetPos().GetX() < 4)
		{
			SetDirection(obj);
			GetPos().SetX(4);
		}

		if (GetPos().GetX() > 38)
		{
			SetDirection(obj);
			GetPos().SetX(38);
		}

		if (GetPos().GetY() < 2)
		{
			SetDirection(obj);
			GetPos().SetY(2);
		}

		if (GetPos().GetY() > 21)
		{
			if (obj->GetType() == PLAYERBAR)
			{
				isHold = true;
				GetPos().SetX(obj->GetPos().GetX() + 2);
				GetPos().SetY(20);
				dir = UP;
				StageManager::GetInstance()->LossLife();
			}
		}
	}
	void Ball::DoAction(KEY key)
	{
		if (GetTickCount() >= ballSpeed)
		{
			if (!isHold)
			{
				MoveBall();
				ballSpeed = GetTickCount() + 25;
			}
		}

		switch (key)
		{
		case J:
			if (isHold)
				if (GetPos().GetX() - 2 >= 4)
				{
					GetPos().SetX(GetPos().GetX() - 2);
					GetPos().SetY(20);
				}
			break;
		case I:
			if (isCanHold)
			{
				isHold = true;
				GetPos().SetY(20);
				dir = UP;
			}
			break;
		case L:
			if (isHold)
				if (GetPos().GetX() + 2 <= 38)
				{
					GetPos().SetX(GetPos().GetX() + 2);
					GetPos().SetY(20);
				}
			break;
		case K:
			isHold = false;
			break;
		case ONE:
			if (isHold)
				dir = LEFTUP;
			break;
		case TWO:
			if (isHold)
				dir = UP;
			break;
		case THREE:
			if (isHold)
				dir = RIGHETUP;
			break;
		case DEFAULT:
		default:
			return;
		}
	}
	void Ball::DrawThis()
	{
		Utility::gotoxy(GetPos().GetX() - 2, GetPos().GetY());
		cout << "  ¡Ü  ";
		switch (dir)
		{
		case UP:
			Utility::gotoxy(GetPos().GetX(), GetPos().GetY() + 1);
			break;
		case LEFTUP:
			Utility::gotoxy(GetPos().GetX() + 2, GetPos().GetY() + 1);
			break;
		case RIGHETUP:
			Utility::gotoxy(GetPos().GetX() - 2, GetPos().GetY() + 1);
			break;
		case DOWN:
			Utility::gotoxy(GetPos().GetX(), GetPos().GetY() - 1);
			break;
		case LEFTDOWN:
			Utility::gotoxy(GetPos().GetX() + 2, GetPos().GetY() - 1);
			break;
		case RIGHTDOWN:
			Utility::gotoxy(GetPos().GetX() - 2, GetPos().GetY() - 1);
			break;
		default:
			break;
		}
		cout << " ";
	}
	void Ball::MoveBall()
	{
		switch (dir)
		{
		case UP:
			GetPos().SetY(GetPos().GetY() - 1);
			break;
		case DOWN:
			GetPos().SetY(GetPos().GetY() + 1);
			break;
		case LEFTUP:
			GetPos().SetX(GetPos().GetX() - 2);
			GetPos().SetY(GetPos().GetY() - 1);
			break;
		case RIGHETUP:
			GetPos().SetX(GetPos().GetX() + 2);
			GetPos().SetY(GetPos().GetY() - 1);
			break;
		case LEFTDOWN:
			GetPos().SetX(GetPos().GetX() - 2);
			GetPos().SetY(GetPos().GetY() + 1);
			break;
		case RIGHTDOWN:
			GetPos().SetX(GetPos().GetX() + 2);
			GetPos().SetY(GetPos().GetY() + 1);
			break;
		}
	}
	void Ball::SetDirection(Object* obj)
	{
		switch (dir)
		{
		case UP:
			dir = DOWN;
			break;
		case DOWN:
			dir = UP;
			break;
		case LEFTUP:
			if (obj->GetType() == BLOCK)
			{
				if (rand() % 2)
					dir = RIGHETUP;
				else
					dir = LEFTDOWN;
			}
			if (GetPos().GetX() < 4)
				dir = RIGHETUP;
			if (GetPos().GetY() < 2)
				dir = LEFTDOWN;
			break;
		case RIGHETUP:
			if (obj->GetType() == BLOCK)
			{
				if (rand() % 2)
					dir = LEFTUP;
				else
					dir = RIGHTDOWN;
			}
			if (GetPos().GetX() > 38)
				dir = LEFTUP;
			if (GetPos().GetY() < 2)
				dir = RIGHTDOWN;
			break;
		case LEFTDOWN:
			if (obj->GetType() == BLOCK)
			{
				if (rand() % 2)
					dir = RIGHETUP;
				else
					dir = RIGHTDOWN;
			}
			if (obj->GetType() == PLAYERBAR)
				dir = RIGHETUP;
			if (GetPos().GetX() < 4)
				dir = RIGHTDOWN;
			break;
		case RIGHTDOWN:
			if (obj->GetType() == BLOCK)
			{
				if (rand() % 2)
					dir = LEFTUP;
				else
					dir = LEFTDOWN;
			}
			if (obj->GetType() == PLAYERBAR)
				dir = LEFTUP;
			if (GetPos().GetX() > 38)
				dir = LEFTDOWN;
			break;
		}
	}
	Ball::~Ball()
	{}
}