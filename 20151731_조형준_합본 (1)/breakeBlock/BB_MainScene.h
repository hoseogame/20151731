#pragma once
#include "BB_gameScene.h"
#include "BB_Object.h"
#include <Windows.h>
#include <vector>

namespace breakeBlock
{
	class Ball;
	class PlayerBar;
	class Block;

	using namespace std;


	enum GAMESTATE {
		isGameOver,
		isLevelUpdate,
		isMissionClear,
		isPrimeDraw,
		isGameing,
		isUiDraw
	};

	class MainScene : public GameScene
	{
	private:
		PlayerBar* playerBar;
		Ball* ball;
		vector<Block*> block;
		GAMESTATE updateState;
		GAMESTATE renderState;
		DWORD primeDrawTime, UiDrawTime;
	public:
		//GameScene로 상속받은 부분
		void Init() override;
		bool Update() override;
		void Render() override;
		void Release() override;

	public:
		explicit MainScene();
		virtual ~MainScene();

	private:
		//외부에서 호출하지 않을 함수
		void SetPlayer();
		void SetBall();
		void SetBlock();
		bool CollisionCheck();
		void RenderObjects();
		void UpdateObjects();
	};
}