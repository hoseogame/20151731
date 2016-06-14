#include <iostream>
#include <Windows.h>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <memory>
#include <stdlib.h>
#include <time.h>
#include <thread>

#include "BB_PlayerBar.h"
#include "BB_Input.h"
#include "BB_Utility.h"
#include "BB_MainScene.h"
#include "BB_BreakBlockGame.h"
#include "BB_ScreenManager.h"
#include "BB_StageManager.h"
#include "BB_EndScene.h"
#include "BB_Block.h"
#include "BB_Ball.h"

using namespace std;

namespace breakeBlock {
	MainScene::MainScene() :
		GameScene(), renderState(isLevelUpdate), updateState(isLevelUpdate),
		playerBar(nullptr), ball(nullptr), primeDrawTime(0), UiDrawTime(0)
	{}

	MainScene::~MainScene()
	{}

	void MainScene::Init()
	{
		SetPlayer();
		SetBall();
		SetBlock();

		primeDrawTime = GetTickCount() + 4000;
		UiDrawTime = GetTickCount() + 3000;
	}
	bool MainScene::Update()
	{
		switch (updateState)
		{
		case isGameOver:
			Input::KeyInput();
			if (Y == Input::GetLastKey())
			{
				StageManager::GetInstance()->ReSetStage();
				Sleep(2000);
				renderState = isLevelUpdate;
				updateState = isLevelUpdate;
			}
			if (N == Input::GetLastKey())
				BreakBlockGame::setScene(new EndScene());

			break;
		case isLevelUpdate:
			Sleep(2000);
			renderState = isPrimeDraw;
			updateState = isGameing;
			break;
		case isMissionClear:
			StageManager::GetInstance()->SetNextStage();
			Sleep(2000);
			renderState = isLevelUpdate;
			updateState = isLevelUpdate;
			break;
		case isGameing:
			CollisionCheck();
			UpdateObjects();
			renderState = isGameing;
			if (StageManager::GetInstance()->CheckLifeZero() ||
				StageManager::GetInstance()->CheckTimeEnd())
			{
				renderState = isGameOver;
				updateState = isGameOver;
			}
			if (StageManager::GetInstance()->CheckMissionClear())
			{
				renderState = isMissionClear;
				updateState = isMissionClear;
			}
		case isUiDraw:
			if (GetTickCount() >= UiDrawTime)
			{
				StageManager::GetInstance()->AddPlayTime();
				UiDrawTime = GetTickCount() + 1000;
				renderState = isUiDraw;
			}
		case isPrimeDraw:
			if (GetTickCount() >= primeDrawTime)
			{
				primeDrawTime = GetTickCount() + 1000;
				renderState = isPrimeDraw;
			}
			break;
		default:
			break;
		}
		return true;
	}
	void MainScene::Render()
	{
		switch (renderState)
		{
		case isGameOver:
			ScreenManager::FailureScreen();
			break;
		case isLevelUpdate:
			ScreenManager::ReadyScreen();
			break;
		case isMissionClear:
			ScreenManager::SuccesScreen();
			break;

		case isPrimeDraw:
			ScreenManager::PrimeScreen();
		case isUiDraw:
			ScreenManager::ScoreUIScreen();
		case isGameing:
			RenderObjects();
			break;
		default:
			break;
		}
	}
	void MainScene::Release()
	{
		delete playerBar;
		delete ball;
		for (vector<Block*>::iterator it = block.begin(); it != block.end(); it++)
		{
			delete *it;
		}
		block.clear();
	}

	bool MainScene::CollisionCheck()
	{
		ball->CollisionCheck(playerBar);
		for (int i = 0; i < 30; i++)
			ball->CollisionCheck(block[i]);

		return true;
	}

	void MainScene::SetPlayer()
	{
		playerBar = new PlayerBar(20, 21);
	}
	void MainScene::SetBall()
	{
		ball = new Ball(22, 20);
	}
	void MainScene::SetBlock()
	{
		srand(time(NULL));
		for (int i = 0; i < 30; i++)
		{
			block.push_back(new Block());
			block[i]->GetPos().SetX(((rand() % 20) * 2) + 2);
			block[i]->GetPos().SetY(rand() % 10 + 2);
		}
	}

	void MainScene::RenderObjects()
	{
		ball->DrawThis();
		playerBar->DrawThis();
		for (int i = 0; i < 30; i++)
			block[i]->DrawThis();
	}
	void MainScene::UpdateObjects()
	{
		KEY key = Input::KeyInput();
		playerBar->DoAction(key);
		ball->DoAction(key);
	}
}