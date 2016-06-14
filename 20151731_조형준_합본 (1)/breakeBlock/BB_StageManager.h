#pragma once

namespace breakeBlock
{
	class StageManager
	{
	private:
		explicit StageManager();
		~StageManager();
		StageManager(const StageManager&);
		StageManager& operator=(const StageManager&);

	private:
		int stageLevel;
		int limitTime;
		int playTime;
		int killAim;
		int killCount;
		int score;
		int life;
		static StageManager* instance;

	public:
		static StageManager* GetInstance();
		static void Release();

		inline int GetextraTime()
		{
			return limitTime - playTime;
		}

		inline int GetScore()
		{
			return score;
		}

		inline int GetStageLevel()
		{
			return stageLevel;
		}

		inline int Getlife()
		{
			return life;
		}

		inline void LossLife()
		{
			life -= 1;
		}

		inline void AddKillCount()
		{
			++killCount;
		}

		inline void AddPlayTime()
		{
			++playTime;
		}

		inline void SetNextStage()
		{
			++stageLevel;
			limitTime += 10;
			playTime = 0;
			killAim = killAim += 10;
			killCount = 0;
			score += 10;
			life = 3;
		}

		inline void ReSetStage()
		{
			playTime = 0;
			killCount = 0;
			life = 3;
		}

		inline bool CheckTimeEnd()
		{
			if (limitTime - 1 < playTime)
				return true;

			return false;
		}

		inline bool CheckLifeZero()
		{
			if (life <= 0)
				return true;
			return false;
		}

		inline bool CheckMissionClear()
		{
			if (killAim <= killCount)
				return true;

			return false;
		}
	};
}