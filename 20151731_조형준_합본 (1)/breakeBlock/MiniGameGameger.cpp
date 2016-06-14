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
	int temp = 0; // Ű�� �� �ޱ��
	while (!isGameEnd)
	{
		system("cls");
		cout << "������ ���ÿ�. 1 : �������� 2 : ������ 3 : ���� ����" << endl << ">> ";
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