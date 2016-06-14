#include <iostream>
#include "BB_Block.h"
#include "BB_Utility.h"
using namespace std;
namespace breakeBlock {
	Block::Block(int _x, int _y) : Object(_x, _y, BLOCK)
	{}
	void Block::CollisionCheck(Object* obj)
	{}
	void Block::DoAction(KEY key)
	{
		switch (key)
		{
		case J:
			break;
		case K:
			break;
		case L:
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
	void Block::DrawThis()
	{
		if (GetisActive())
		{
			Utility::gotoxy(GetPos().GetX(), GetPos().GetY());
			cout << "бс";
		}
	}
	Block::~Block()
	{}
}