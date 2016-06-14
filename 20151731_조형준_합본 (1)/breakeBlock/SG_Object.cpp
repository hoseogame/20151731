#include <iostream>
#include "SG_Object.h"
#include "SG_Utility.h"
using namespace std;
namespace ShootGoal
{
	Object::Object(int _x, int _y, Shape _form, ObjectType _type) : pos(_x, _y), form(_form), type(_type)
	{}

	Object::~Object() {}

	void Object::DrawThis()
	{
		int shift = form.length() >> 1;
		Utility::gotoxy(this->GetPotion().x - shift, this->GetPotion().y);
		cout << this->GetShape();
	}
}