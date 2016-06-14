#include <iostream>
#include "SG_ScreenManager.h"
#include "SG_Utility.h"

using namespace std;
namespace ShootGoal
{
	void ScreenManager::StartScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "旨收收收收收收收收收收收收收收收收收收收收收旬" << endl;
		cout << "早                                          早" << endl;
		cout << "早             ﹤收收收﹤                   早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                        ///.   螂~~~      早" << endl;
		cout << "早                       (^.^)              早" << endl;
		cout << "早                      曲朽 曳旬           早" << endl;
		cout << "早                         旨旭             早" << endl;
		cout << "早                     Ⅸ  旭′             早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早       螂 埤檣 啪歜  Go! Go!              早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早       j :豭薹 l : 螃艇薹 k :螂           早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早        曲≒旭  space 酈蒂 揚楝輿撮蹂     早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "曲收收收收收收收收收收收收收收收收收收收收收旭" << endl;
	}
	void ScreenManager::PrimeScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "旨收收收收收收收收收收收收收收收收收收收收收旬" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "曳收收收收收收收收收收收收收收收收收收收收收朽" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "曲收收收收收收收收收收收收收收收收收收收收收旭" << endl;
	}
	void ScreenManager::GoalScreen()
	{
		static int time = 0;
		Utility::gotoxy(14, 12); cout << "≧ )) 埤檣 (( ≠";
		Utility::gotoxy(14, 13); cout << "′(^^')/ ′(\"*')/";
		Utility::gotoxy(14, 14); cout << "   ﹥       ﹥";
		Utility::gotoxy(14, 15); cout << "  戎忖    忙戌";
	}
	void ScreenManager::ResultScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "旨收收收收收收收收收收收收收收收收收收收收收旬" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早             ﹤收收收﹤                   早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早   ___〤〤〤___                           早" << endl;
		cout << "早     (*^  ^*)                             早" << endl;
		cout << "早 =====∞==∞=====                         早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                      曲≒旭              早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "早                                          早" << endl;
		cout << "曲收收收收收收收收收收收收收收收收收收收收收旭" << endl;
	}
}