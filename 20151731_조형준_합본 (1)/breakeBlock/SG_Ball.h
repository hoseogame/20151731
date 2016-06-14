#pragma once
#include "SG_Object.h"
#include "SG_Input.h"

namespace ShootGoal
{
	class Ball : public Object
	{
	private:
		bool isShoot;

	public:
		explicit Ball(int x, int y);
		virtual ~Ball();
		void DoAction(KEY key) override;
		inline bool GetIsShoot()
		{
			return isShoot;
		}
		inline void SetIsShoot(bool _isShoot)
		{
			isShoot = _isShoot;
		}
	};
}