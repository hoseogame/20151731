#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "BB_IntroScene.h"
#include "BB_BreakBlockGame.h"
#include "BB_MainScene.h"
#include "BB_Input.h"
#include "BB_ScreenManager.h"

using namespace std;
namespace breakeBlock {
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
			BreakBlockGame::setScene(new MainScene());

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