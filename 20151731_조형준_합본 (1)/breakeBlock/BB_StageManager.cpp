#include <iostream>
#include <Windows.h>
#include "BB_StageManager.h"
#include "BB_Utility.h"

using namespace std;
namespace breakeBlock {
	StageManager* StageManager::instance = new StageManager();

	StageManager::StageManager() : stageLevel(1), limitTime(60), playTime(0), killAim(25), killCount(0), score(0), life(3)
	{
	}
	StageManager::~StageManager()
	{}

	StageManager* StageManager::GetInstance()
	{
		if (!instance)
			instance = new StageManager();

		return instance;
	}

	void StageManager::Release()
	{
		if (instance)
		{
			delete instance;
			instance = nullptr;
		}
	}
}