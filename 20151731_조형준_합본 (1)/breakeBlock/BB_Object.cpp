#include <iostream>
#include "BB_Object.h"
#include "BB_Utility.h"
using namespace std;
namespace breakeBlock {
	Object::Object(int _x, int _y, ObjectType _type) : pos(_x, _y), type(_type), isActive(true)
	{}

	Object::~Object() {}
}