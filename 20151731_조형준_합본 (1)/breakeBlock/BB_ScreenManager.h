#pragma once

namespace breakeBlock
{
	class ScreenManager
	{
	private:
		ScreenManager();
		~ScreenManager();
	public:
		static void StartScreen();
		static void PrimeScreen();
		static void ReadyScreen();
		static void ResultScreen();
		static void SuccesScreen();
		static void FailureScreen();
		static void ScoreUIScreen();
	};
}