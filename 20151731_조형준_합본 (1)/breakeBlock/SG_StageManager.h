#pragma once
namespace ShootGoal
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
		int goalAim;
		int goalCount;
		static StageManager* instance;

	public:
		static StageManager* GetInstance();
		static void Release();

		inline void SetNextStage()
		{
			++stageLevel;
			limitTime += 10;
			playTime = 0;
			goalAim = goalAim * 3;
			goalCount = 0;
		}

		inline void ReSetStage()
		{
			playTime = 0;
			goalCount = 0;
		}

		inline bool CheckTimeEnd()
		{
			if (limitTime - 1 < playTime)
				return true;

			return false;
		}

		inline bool CheckMissionClear()
		{
			if (goalAim <= goalCount)
				return true;

			return false;
		}

		inline void AddGoalCount()
		{
			++goalCount;
		}

		inline void AddPlayTime()
		{
			++playTime;
		}

		void ShowUi();
		void ShowResult();
		void ShowIntro();
		void ShowSucess();
		void ShowFail();
	};
}