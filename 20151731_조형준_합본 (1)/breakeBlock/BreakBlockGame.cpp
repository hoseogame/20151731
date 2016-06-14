#include "BB_BreakBlockGame.h"
#include "BB_IntroScene.h"
namespace breakeBlock {
	GameScene* BreakBlockGame::scene;

	BreakBlockGame::BreakBlockGame() : isGameRun(true)
	{}

	BreakBlockGame::~BreakBlockGame()
	{}

	void BreakBlockGame::Run()
	{
		Init();
		Update();
		Release();
	}
	void BreakBlockGame::Init()
	{
		setScene(nullptr);
	}

	bool BreakBlockGame::Update()
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

	void BreakBlockGame::Release()
	{
		delete scene;
	}

	void BreakBlockGame::setScene(GameScene* cur)
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