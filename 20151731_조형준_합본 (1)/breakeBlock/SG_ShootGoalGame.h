#pragma once
#include "MiniGame.h"
namespace ShootGoal
{
	class GameScene;

	class ShootGoalGame : public MiniGame
	{
	private:
		static GameScene* scene;
		bool isGameRun;
	public:
		void Run() override;
	private:
		void Init();
		bool Update();
		void Release();

	public:
		explicit ShootGoalGame();
		~ShootGoalGame();

		static void setScene(GameScene* cur);
	};
}
