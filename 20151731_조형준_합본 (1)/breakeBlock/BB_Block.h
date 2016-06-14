#pragma once
#include "BB_Object.h"

namespace breakeBlock
{
	class Block : public Object
	{
	private:
	public:
		Block(int _x = 0, int _y = 0); // 동적 배열 생성을 위해 기본생성자 대신 디폴트 매개변수 값을 입력하였음.
		void CollisionCheck(Object* obj) override;
		void DoAction(KEY key) override;
		void DrawThis() override;
		~Block();
	};
}