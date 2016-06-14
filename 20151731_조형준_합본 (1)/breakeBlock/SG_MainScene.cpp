#include <iostream>
#include <Windows.h>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <memory>
#include "SG_ScreenManager.h"
#include "SG_StageManager.h"
#include "SG_Input.h"
#include "SG_Utility.h"
#include "SG_MainScene.h"
#include "SG_ShootGoalGame.h"
#include "SG_EndScene.h"
#include "SG_Ball.h"
#include "SG_Player.h"
#include "SG_GoalPost.h"

using namespace std;
namespace ShootGoal
{
	MainScene::MainScene() :
		GameScene(), isgameOver(false), islevelUpdate(true), isPrimeDrow(false), isTimeEnd(false), isMissionClear(false), isGool(false),
		player(nullptr), ball(nullptr), goalPost(nullptr), dwTime(0), dwTime2(0)
	{}

	MainScene::~MainScene()
	{}

	void MainScene::Init()
	{
		SetPlayer();
		SetBall();
		SetGoalPost();
		dwTime = GetTickCount() + 1000;
		StageManager::GetInstance();
	}
	bool MainScene::Update()
	{
		if (!isTimeEnd && !isMissionClear) //게임플레이중
		{
			UpdateObjects();
			CollisionCheck();
			isTimeEnd = StageManager::GetInstance()->CheckTimeEnd();
			isMissionClear = StageManager::GetInstance()->CheckMissionClear();

			if (GetTickCount() >= dwTime)//1초씩 올리기 위함
			{
				dwTime = GetTickCount() + 1000;
				StageManager::GetInstance()->AddPlayTime();
				isPrimeDrow = false;
			}
			if (isGool)
			{
				if (GetTickCount() >= dwTime2)//1초씩 올리기 위함
				{
					isGool = false;
				}
			}
		}
		else if (isMissionClear) //미션 클리어
		{
			islevelUpdate = true;
			isPrimeDrow = false;
			isTimeEnd = false;
			isMissionClear = false;
			goalPost->ResetSize();
		}
		else if (isTimeEnd) //미션 실패
		{
			switch (Input::KeyInput())
			{
			case Y:
				islevelUpdate = true;
				isPrimeDrow = false;
				isTimeEnd = false;
				isMissionClear = false;
				StageManager::GetInstance()->ReSetStage();
				break;

			case N:
				isgameOver = true;
				break;
			}
		}
		if (isgameOver)
			ShootGoalGame::setScene(new EndScene());

		return true;
	}
	void MainScene::Render()
	{
		if (islevelUpdate) 	//스테이지 바뀔때
		{
			StageManager::GetInstance()->ShowIntro();
			system("cls");
			islevelUpdate = false;
		}
		else if (isMissionClear) // 미션성공했을때
		{
			StageManager::GetInstance()->ShowSucess();
			StageManager::GetInstance()->SetNextStage();
		}
		else if (isTimeEnd) // 미션 실패했을때
		{
			StageManager::GetInstance()->ShowFail();
		}
		else //게임중
		{
			if (!isPrimeDrow) //게임틀
			{
				ScreenManager::PrimeScreen();
				isPrimeDrow = true;
			}
			if (isGool) //골 이팩트
			{
				ScreenManager::GoalScreen();
			}
			StageManager::GetInstance()->ShowUi();
			RenderObjects();
		}
		Sleep(80);
	}
	void MainScene::Release()
	{
	}

	bool MainScene::CollisionCheck()
	{
		if (ball->GetPotion().y == goalPost->GetPotion().y)
		{
			int goalPostX = goalPost->GetPotion().x;
			int goalPostSizeHalf = goalPost->GetShape().length() >> 1;
			int ballX = ball->GetPotion().x;

			if (ballX == goalPostX - goalPostSizeHalf || ballX == goalPostX + goalPostSizeHalf ||
				ballX == goalPostX - goalPostSizeHalf + 1 || ballX == goalPostX + goalPostSizeHalf - 1)//골대 체크
				ball->SetIsShoot(false);
			else if (ballX > goalPostX - goalPostSizeHalf && ballX < goalPostX + goalPostSizeHalf)// 네트 체크
			{
				StageManager::GetInstance()->AddGoalCount();
				dwTime2 = GetTickCount() + 1500;
				ball->SetIsShoot(false);
				isGool = true;
			}
		}
		return true;
	}

	void MainScene::SetPlayer()
	{
		player.reset(new Player());
	}
	void MainScene::SetBall()
	{
		ball.reset(new Ball(player->GetPotion().x, player->GetPotion().y - 1));
	}
	void MainScene::SetGoalPost()
	{
		if (!goalPost)
		{
			goalPost.reset(new GoalPost());
			return;
		}
	}

	void MainScene::RenderObjects()
	{
		player->DrawThis();
		ball->DrawThis();
		goalPost->DrawThis();
	}
	void MainScene::UpdateObjects()
	{
		static KEY key = DEFAULT;
		key = Input::KeyInput();

		player->DoAction(key);
		ball->DoAction(key);
		goalPost->DoAction(key);

		if (!ball->GetIsShoot())
			ball->SetPotion(player->GetPotion().x, player->GetPotion().y - 1);
	}
}