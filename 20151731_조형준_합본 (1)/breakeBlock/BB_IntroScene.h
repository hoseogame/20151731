#pragma once
#include "BB_gameScene.h"

namespace breakeBlock
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