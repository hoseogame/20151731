#pragma once
class MiniGame;

class MiniGameManager
{
public:
	MiniGameManager() = default;
	~MiniGameManager() = default;
	void Init();
	void Update();
	void Release();
private:
	bool isGameEnd;
	static MiniGame* game;
};
