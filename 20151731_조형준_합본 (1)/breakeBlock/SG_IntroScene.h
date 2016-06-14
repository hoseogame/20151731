#pragma once
#include "SG_gameScene.h"

namespace ShootGoal
{
	class IntroScene : public GameScene
	{
	private:

	public:
		//GameScene�� ��ӹ��� �κ�
		void Init() override;
		bool Update() override;
		void Render() override;
		void Release() override;

	public:
		explicit IntroScene();
		virtual ~IntroScene();
	};
}