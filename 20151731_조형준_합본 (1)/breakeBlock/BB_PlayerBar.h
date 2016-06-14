#pragma once
#include "BB_Object.h"
namespace breakeBlock
{
	class PlayerBar : public Object
	{
	private:
	public:
		PlayerBar(int _x, int _y);
		void CollisionCheck(Object* obj) override;
		void DoAction(KEY key) override;
		void DrawThis() override;
		~PlayerBar();
	};
}