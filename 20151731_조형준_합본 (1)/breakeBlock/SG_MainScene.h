#pragma once
#include <memory>
#include <Windows.h>
#include "SG_gameScene.h"
#include "SG_Object.h"

namespace ShootGoal
{
	class Ball;
	class Player;
	class GoalPost;

	using namespace std;

	class MainScene : public GameScene
	{
	private:
		tr1::shared_ptr<Player> player;
		tr1::shared_ptr<Ball> ball;
		tr1::shared_ptr<GoalPost> goalPost;

		DWORD dwTime, dwTime2;
		bool isgameOver;
		bool isGool;
		bool islevelUpdate;
		bool isMissionClear;
		bool isTimeEnd;
		bool isPrimeDrow;
	public:
		//GameScene로 상속받은 부분
		void Init() override;
		bool Update() override;
		void Render() override;
		void Release() override;

	public:
		explicit MainScene();
		virtual ~MainScene();

		void SetPlayer();
		void SetBall();
		void SetGoalPost();

		bool CollisionCheck();
		void RenderObjects();
		void UpdateObjects();
	};
}