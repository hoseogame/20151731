#include <iostream>
#include "SG_ScreenManager.h"
#include "SG_Utility.h"

using namespace std;
namespace ShootGoal
{
	void ScreenManager::StartScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "����������������������������������������������" << endl;
		cout << "��                                          ��" << endl;
		cout << "��             �ব������                   ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                        ///.   ��~~~      ��" << endl;
		cout << "��                       (^.^)              ��" << endl;
		cout << "��                      ���� ����           ��" << endl;
		cout << "��                         ����             ��" << endl;
		cout << "��                     ��  ����             ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��       �� ���� ����  Go! Go!              ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��       j :���� l : ������ k :��           ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��        ���ܦ�  space Ű�� �����ּ���     ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "����������������������������������������������" << endl;
	}
	void ScreenManager::PrimeScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "����������������������������������������������" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "����������������������������������������������" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "����������������������������������������������" << endl;
	}
	void ScreenManager::GoalScreen()
	{
		static int time = 0;
		Utility::gotoxy(14, 12); cout << "�� )) ���� (( ��";
		Utility::gotoxy(14, 13); cout << "��(^^')/ ��(\"*')/";
		Utility::gotoxy(14, 14); cout << "   ��       ��";
		Utility::gotoxy(14, 15); cout << "  ����    ����";
	}
	void ScreenManager::ResultScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "����������������������������������������������" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��             �ব������                   ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��   ___�ƢƢ�___                           ��" << endl;
		cout << "��     (*^  ^*)                             ��" << endl;
		cout << "�� =====��==��=====                         ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                      ���ܦ�              ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "����������������������������������������������" << endl;
	}
}