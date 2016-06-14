#include "SG_ShootGoalGame.h"
#include "SG_IntroScene.h"
namespace ShootGoal
{
	GameScene* ShootGoalGame::scene;

	ShootGoalGame::ShootGoalGame() : isGameRun(true)
	{}

	ShootGoalGame::~ShootGoalGame()
	{}

	void ShootGoalGame::Run()
	{
		Init();
		Update();
		Release();
	}
	void ShootGoalGame::Init()
	{
		setScene(nullptr);
	}

	bool ShootGoalGame::Update()
	{
		if (!scene)
			return false;

		while (isGameRun)
		{
			isGameRun = scene->Update();
			scene->Render();
		}

		return true;
	}

	void ShootGoalGame::Release()
	{
		delete scene;
	}

	void ShootGoalGame::setScene(GameScene* cur)
	{
		if (scene == nullptr)
		{
			scene = new IntroScene();
			scene->Init();
		}
		else if (cur != nullptr)
		{
			scene->Release();
			delete scene;
			scene = cur;
			scene->Init();
		}
	}
}