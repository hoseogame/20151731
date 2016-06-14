#pragma once
#include <string>
#include "BB_Input.h"

namespace breakeBlock
{
	struct Postion
	{
	private:
		int x;
		int y;
	public:
		Postion(int _x, int _y) :
			x(_x),
			y(_y)
		{}

		inline int GetX()
		{
			return x;
		}

		inline int GetY()
		{
			return y;
		}

		inline void SetX(int _x)
		{
			x = _x;
		}

		inline void SetY(int _y)
		{
			y = _y;
		}

		bool operator==(const Postion& po)
		{
			if (x == po.x && y == po.y)
				return true;
			else
				return false;
		}
	};

	enum ObjectType {
		PLAYERBAR = 0,
		BALL,
		BLOCK
	};

	class Object
	{
	private:
		Postion pos;
		ObjectType type;
		bool isActive;

	public:
		Object(int _x, int _y, ObjectType _type);
		virtual ~Object();

		virtual void CollisionCheck(Object* obj) = 0;
		virtual void DoAction(KEY key) = 0;
		virtual void DrawThis() = 0;

		inline Postion& GetPos()
		{
			return pos;
		}

		inline ObjectType GetType()
		{
			return type;
		}
		inline void SetisActive(bool _isActive)
		{
			isActive = _isActive;
		}
		inline bool GetisActive()
		{
			return isActive;
		}
	};
}