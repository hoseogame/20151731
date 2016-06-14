#pragma once
#include "MiniGame.h"
namespace breakeBlock
{
	class GameScene;

	class BreakBlockGame : public MiniGame
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
		explicit BreakBlockGame();
		~BreakBlockGame();

		static void setScene(GameScene* cur);

	};
}