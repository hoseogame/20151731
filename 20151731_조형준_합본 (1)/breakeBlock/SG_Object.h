#pragma once
#include <string>
#include "SG_Input.h"
namespace ShootGoal
{
	typedef std::string Shape;

	struct Postion
	{
	public:
		int x;
		int y;
	public:
		Postion(int _x, int _y) :
			x(_x),
			y(_y)
		{}

		inline void SetPotion(int _x, int _y)
		{
			x = _x;
			y = _y;
		}
	};

	enum ObjectType {
		PLAYER = 0,
		BALL,
		GOALPOST
	};

	class Object
	{
	private:
		Postion pos;
		Shape form;
		ObjectType type;

	public:
		Object(int _x, int _y, Shape _form, ObjectType _type);
		virtual ~Object();

		virtual void DoAction(KEY key) = 0;
		void DrawThis();

		inline void SetShape(Shape _form)
		{
			form = _form;
		}

		inline Shape GetShape()
		{
			return form;
		}

		inline void SetPotion(int _x, int _y)
		{
			pos.x = _x;
			pos.y = _y;
		}

		inline Postion GetPotion()
		{
			return pos;
		}

		inline ObjectType GetType()
		{
			return type;
		}
	};
}