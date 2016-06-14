#include <iostream>
#include "BB_ScreenManager.h"
#include "BB_StageManager.h"
#include "BB_Utility.h"

using namespace std;
namespace breakeBlock {
	void ScreenManager::StartScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��                                        ��" << endl;
		cout << "��    �����������������    ��" << endl;
		cout << "��      ���������������      ��" << endl;
		cout << "��        �������������        ��" << endl;
		cout << "��          �����������          ��" << endl;
		cout << "��          ��������������������          ��" << endl;
		cout << "��          ���� ���� ����  �ڦ�          ��" << endl;
		cout << "��          ��������������������          ��" << endl;
		cout << "��              /)/)    �� ��             ��" << endl;
		cout << "��           ��(*'')/                     ��" << endl;
		cout << "��          �����������          ��" << endl;
		cout << "��        �������������        ��" << endl;
		cout << "��      ���������������      ��" << endl;
		cout << "��    �����������������    ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��    �� �����̽�Ű�� �����ּ���!! ��     ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��     J:��  L:�� K: ���߻� I: �����     ��" << endl;
		cout << "��     ( �� �߻� ���� )                   ��" << endl;
		cout << "��       1: ���� 2: ���� 3: ������        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "�������������������������������������������� " << endl;
	}
	void ScreenManager::PrimeScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��������������������������������������������" << endl;
	}

	void ScreenManager::ReadyScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��            " << StageManager::GetInstance()->GetStageLevel() << " S t a g e                 ��" << endl;
		cout << "��                            ��          ��" << endl;
		cout << "��                      �С리��          ��" << endl;
		cout << "��                        �С린          ��" << endl;
		cout << "��                          ������        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��������������������������������������������" << endl;
	}

	void ScreenManager::ResultScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��   (((    ���� ����  ���� Score  ))))   ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��           �� ����  : " << StageManager::GetInstance()->GetScore() << "                 ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��������������������������������������������" << endl;
	}
	void ScreenManager::SuccesScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��      *.                                ��" << endl;
		cout << "��              .*            .*          ��" << endl;
		cout << "��     *.                        .*       ��" << endl;
		cout << "��       *.             .*                ��" << endl;
		cout << "��           *.                           ��" << endl;
		cout << "��            *.             .*           ��" << endl;
		cout << "��     *.      *.��������.*��    .*       ��" << endl;
		cout << "��             ��������������             ��" << endl;
		cout << "��     *.      ��������������      .*     ��" << endl;
		cout << "��             ��������������~            ��" << endl;
		cout << "��        *.   ������������               ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                          .*            ��" << endl;
		cout << "��  *.           You Win!!          *.    ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                       *.               ��" << endl;
		cout << "��    *.         *.                       ��" << endl;
		cout << "��                                 *.     ��" << endl;
		cout << "��                      *.                ��" << endl;
		cout << "��  *.                             *.     ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��������������������������������������������" << endl;
	}

	void ScreenManager::FailureScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "��������������������������������������������" << endl;
		cout << "��  �������������������  ��" << endl;
		cout << "��  �������������������  ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��             *�Ѧ�  �Ѧ�*               ��" << endl;
		cout << "��          *.  �Ӥӡ�Ӥ�   .*           ��" << endl;
		cout << "��   ���ѤѤѤѤѤѤѤѤѤѤѤѤѤѦ�     ��" << endl;
		cout << "��   ������ �� ��ȸ�� �̿��� �ּ��䦭     ��" << endl;
		cout << "��   ���ѤѤѤѤѤѤѤѤѤѤѤѤѤѦ�     ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��    (*�ҡ�*)                            ��" << endl;
		cout << "��   ��O������O����������������������     ��" << endl;
		cout << "��   ������Ͻðڽ��ϱ�? <y/n>     ��     ��" << endl;
		cout << "��   ��������������������������������     ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��                                        ��" << endl;
		cout << "��  �������������������  ��" << endl;
		cout << "��  �������������������  ��" << endl;
		cout << "��������������������������������������������" << endl;
	}

	void ScreenManager::ScoreUIScreen()
	{
		Utility::gotoxy(45, 2);
		cout << "�������� : " << StageManager::GetInstance()->GetStageLevel();
		Utility::gotoxy(45, 3);
		cout << "���� : " << StageManager::GetInstance()->Getlife();
		Utility::gotoxy(45, 4);
		cout << "���� : " << StageManager::GetInstance()->GetScore();
		Utility::gotoxy(45, 5);
		cout << "�����ð� : " << StageManager::GetInstance()->GetextraTime() / 60 << " �� " << StageManager::GetInstance()->GetextraTime() % 60 << " ��";
	}
}