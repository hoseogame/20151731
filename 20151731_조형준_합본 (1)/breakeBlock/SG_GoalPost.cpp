#include "SG_GoalPost.h"
#include <iostream>
using namespace std;
namespace ShootGoal
{
	GoalPost::GoalPost() : Object(20, 3, "﹤收收收﹤", GOALPOST), isGoLeft(true), goalPostSize(3)
	{}

	GoalPost::~GoalPost()
	{}

	void GoalPost::DoAction(KEY key)
	{
		static int lengthHalf = 0;
		lengthHalf = GetShape().length() >> 1;

		if (isGoLeft)
		{
			if (2 < GetPotion().x - lengthHalf)
				SetPotion(GetPotion().x - 1, 3);
			else
				isGoLeft = false;
		}
		else
		{
			if (44 > GetPotion().x + lengthHalf)
				SetPotion(GetPotion().x + 1, 3);
			else
				isGoLeft = true;
		}
	}

	void GoalPost::ResetSize()
	{
		goalPostSize += 2;

		Shape form = "﹤";
		for (int i = 0; i < goalPostSize; i++)
			form += "收";
		form += "﹤";
		this->SetShape(form);
	}
}