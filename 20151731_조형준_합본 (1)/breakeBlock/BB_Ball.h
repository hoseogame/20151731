#pragma once
#include "BB_Object.h"
#include <Windows.h>

namespace breakeBlock
{
	enum DIRECTOIN
	{
		UP, DOWN, LEFTUP, RIGHETUP, LEFTDOWN, RIGHTDOWN
	};

	class Ball : public Object
	{
	private:
		bool isCanHold;
		bool isHold;
		DWORD ballSpeed;
		DIRECTOIN dir;
	public:
		Ball(int _x, int _y);
		void CollisionCheck(Object* obj) override;
		void DoAction(KEY key) override;
		void DrawThis() override;

		~Ball();
	private:
		void MoveBall();
		void SetDirection(Object* obj);
	};
}