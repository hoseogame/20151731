#pragma once
#include "SG_Object.h"
#include "SG_Input.h"
namespace ShootGoal
{
	class GoalPost : public Object
	{
	private:
		bool isGoLeft;
		int goalPostSize;

	public:
		explicit GoalPost();
		virtual ~GoalPost();
		void DoAction(KEY key) override;
		void ResetSize();
	};
}