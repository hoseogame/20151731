#pragma once
#include "SG_gameScene.h"

namespace ShootGoal
{
	class IntroScene : public GameScene
	{
	private:

	public:
		//GameScene로 상속받은 부분
		void Init() override;
		bool Update() override;
		void Render() override;
		void Release() override;

	public:
		explicit IntroScene();
		virtual ~IntroScene();
	};
}