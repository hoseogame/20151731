#include <iostream>
#include <Windows.h>
#include "SG_StageManager.h"
#include "SG_Utility.h"

using namespace std;
namespace ShootGoal
{
	StageManager* StageManager::instance = new StageManager();

	StageManager::StageManager() : stageLevel(1), limitTime(15), playTime(0), goalAim(3), goalCount(0)
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

	void StageManager::ShowUi()
	{
		Utility::gotoxy(47, 4);
		cout << "��������: " << stageLevel;
		Utility::gotoxy(47, 6);
		cout << "���� �ð� : " << limitTime;
		Utility::gotoxy(47, 8);
		cout << "���� �ð� : " << playTime;
		Utility::gotoxy(47, 10);
		cout << "��ǥ ���� : " << goalAim;
		Utility::gotoxy(47, 12);
		cout << "���� �� ���� : " << goalCount;
	}

	void StageManager::ShowResult()
	{
		Utility::gotoxy(14, 8);
		cout << "������ �������� : " << (stageLevel - 1);
	}

	void StageManager::ShowIntro()
	{
		Utility::gotoxy(0, 0);
		cout << "����������������������������������������������" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "��������                    ������᦭" << endl;
		cout << "��������                    ������᦭" << endl;
		cout << "��������                    ������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "�����������������������᦭" << endl;
		cout << "����������������������������������������������" << endl;

		Utility::gotoxy(17, 11);
		cout << stageLevel << "  ��������";

		Sleep(2000);
	}

	void StageManager::ShowSucess()
	{
		Utility::gotoxy(0, 0);
		cout << "����������������������������������������������" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                ////����                  ��" << endl;
		cout << "��               q ��  �� p                 ��" << endl;
		cout << "��               (��������)                 ��" << endl;
		cout << "��             �� �̼� ���� ��              ��" << endl;
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
		Sleep(2000);
		system("cls");
	}

	void StageManager::ShowFail()
	{
		Utility::gotoxy(0, 0);
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
		cout << "��                    �̼� ���� !!!!        ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                 �ܦ�����                 ��" << endl;
		cout << "��                   ��  ��                 ��" << endl;
		cout << "��                  �����                ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��        �ٽ� �Ͻðڽ��ϱ�? (y/n)          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "��                                          ��" << endl;
		cout << "����������������������������������������������" << endl;
	}
}