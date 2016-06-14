#include <iostream>
#include <Windows.h>
#include "SG_ShootGoalGame.h"
#include "SG_IntroScene.h"
#include "SG_EndScene.h"
#include "SG_Utility.h"
#include "SG_Input.h"
#include "SG_ScreenManager.h"
#include "SG_StageManager.h"
using namespace std;
namespace ShootGoal
{
	EndScene::EndScene()
	{}

	EndScene::~EndScene()
	{}

	void EndScene::Init()
	{
		system("cls");
	}
	bool EndScene::Update()
	{
		_getch();

		return false;
	}
	void EndScene::Render()
	{
		ScreenManager::ResultScreen();
		StageManager::GetInstance()->ShowResult();
	}
	void EndScene::Release()
	{
		StageManager::Release();
	}
}