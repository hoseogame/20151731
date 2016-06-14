#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "SG_IntroScene.h"
#include "SG_ShootGoalGame.h"
#include "SG_MainScene.h"
#include "SG_ScreenManager.h"
#include "SG_Input.h"

using namespace std;
namespace ShootGoal
{
	IntroScene::IntroScene()
	{}
	IntroScene::~IntroScene()
	{}

	void IntroScene::Init()
	{
	}
	bool IntroScene::Update()
	{
		if (SPACE == Input::KeyInput())
			ShootGoalGame::setScene(new MainScene());

		return true;
	}
	void IntroScene::Render()
	{
		ScreenManager::StartScreen();
	}
	void IntroScene::Release()
	{
	}
}