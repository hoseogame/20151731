#pragma once
namespace ShootGoal
{
	class ScreenManager
	{
	private:
		ScreenManager();
		~ScreenManager();
	public:
		static void StartScreen();
		static void PrimeScreen();
		static void GoalScreen();
		static void ResultScreen();
	};
}