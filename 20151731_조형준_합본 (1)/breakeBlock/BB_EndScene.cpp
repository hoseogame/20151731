#include <iostream>
#include <Windows.h>
#include "BB_BreakBlockGame.h"
#include "BB_IntroScene.h"
#include "BB_EndScene.h"
#include "BB_Utility.h"
#include "BB_Input.h"
#include "BB_ScreenManager.h"

using namespace std;
namespace breakeBlock {
	EndScene::EndScene()
	{

	}
	EndScene::~EndScene()
	{

	}
	void EndScene::Init()
	{
		system("cls");
	}
	bool EndScene::Update()
	{
		ScreenManager::ResultScreen();
		_getch();

		return false;
	}
	void EndScene::Render()
	{
	}
	void EndScene::Release()
	{
	}
}