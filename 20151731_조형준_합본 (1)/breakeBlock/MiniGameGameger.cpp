#include "MiniGameManager.h"
#include "MiniGame.h"
#include <iostream>
#include "BB_BreakBlockGame.h"
#include "SG_ShootGoalGame.h"
using namespace std;

MiniGame* MiniGameManager::game;

void MiniGameManager::Init()
{
	isGameEnd = false;
	game = nullptr;
}
void MiniGameManager::Update()
{
	int temp = 0; // 키의 값 받기용
	while (!isGameEnd)
	{
		system("cls");
		cout << "게임을 고르시오. 1 : 벽돌깨기 2 : 슛골인 3 : 게임 종료" << endl << ">> ";
		temp = 0;
		cin >> temp;
		system("cls");

		switch (temp)
		{
		case 1:
			game = new breakeBlock::BreakBlockGame();
			break;
		case 2:
			game = new ShootGoal::ShootGoalGame();
			break;
		case 3:
			isGameEnd = true;
			break;
		default:
			break;
		}

		if (game)
		{
			game->Run();
			delete game;
			game = nullptr;
		}
	}
}
void MiniGameManager::Release()
{
	if (game)
		delete game;
	cout << "Thanks To Play" << endl;
}