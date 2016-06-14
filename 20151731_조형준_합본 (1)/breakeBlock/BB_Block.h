#pragma once
#include "BB_Object.h"

namespace breakeBlock
{
	class Block : public Object
	{
	private:
	public:
		Block(int _x = 0, int _y = 0); // ���� �迭 ������ ���� �⺻������ ��� ����Ʈ �Ű����� ���� �Է��Ͽ���.
		void CollisionCheck(Object* obj) override;
		void DoAction(KEY key) override;
		void DrawThis() override;
		~Block();
	};
}