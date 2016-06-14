#include <iostream>
#include <stdio.h>
#include "MiniGameManager.h"
using namespace std;

int main(void)
{
	MiniGameManager minigame;
	minigame.Init();
	minigame.Update();
	minigame.Release();

	return 0;
} 