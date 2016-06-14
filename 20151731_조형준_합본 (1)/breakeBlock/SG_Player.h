#pragma once
#include "SG_Object.h"
#include "SG_Input.h"
namespace ShootGoal
{
	class Player : public Object
	{
	public:
		explicit Player();
		virtual ~Player();
		void DoAction(KEY key) override;
	};
}