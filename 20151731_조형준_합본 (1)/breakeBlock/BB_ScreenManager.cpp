#include <iostream>
#include "BB_ScreenManager.h"
#include "BB_StageManager.h"
#include "BB_Utility.h"

using namespace std;
namespace breakeBlock {
	void ScreenManager::StartScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃    ■■■■■■■■■■■■■■■■    ┃" << endl;
		cout << "┃      ■■■■■■■■■■■■■■      ┃" << endl;
		cout << "┃        ■■■■■■■■■■■■        ┃" << endl;
		cout << "┃          ■■■■■■■■■■          ┃" << endl;
		cout << "┃          ┏━━━━━━━━┓          ┃" << endl;
		cout << "┃          ┃★ 벽돌 깨기  ★┃          ┃" << endl;
		cout << "┃          ┗━━━━━┳━━┛          ┃" << endl;
		cout << "┃              /)/)    ┃ ☆             ┃" << endl;
		cout << "┃           ★(*'')/                     ┃" << endl;
		cout << "┃          ■■■■■■■■■■          ┃" << endl;
		cout << "┃        ■■■■■■■■■■■■        ┃" << endl;
		cout << "┃      ■■■■■■■■■■■■■■      ┃" << endl;
		cout << "┃    ■■■■■■■■■■■■■■■■    ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃    ★ 스페이스키를 눌러주세요!! ★     ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃     J:좌  L:우 K: 공발사 I: 공잡기     ┃" << endl;
		cout << "┃     ( 공 발사 방향 )                   ┃" << endl;
		cout << "┃       1: 왼족 2: 위쪽 3: 오른쪽        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛ " << endl;
	}
	void ScreenManager::PrimeScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << endl;
	}

	void ScreenManager::ReadyScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃            " << StageManager::GetInstance()->GetStageLevel() << " S t a g e                 ┃" << endl;
		cout << "┃                            ●          ┃" << endl;
		cout << "┃                      ☜〓━┃          ┃" << endl;
		cout << "┃                        ☜〓┛          ┃" << endl;
		cout << "┃                          ┏┻┓        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << endl;
	}

	void ScreenManager::ResultScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃   (((    벽돌 깨기  게임 Score  ))))   ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃           총 점수  : " << StageManager::GetInstance()->GetScore() << "                 ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << endl;
	}
	void ScreenManager::SuccesScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃      *.                                ┃" << endl;
		cout << "┃              .*            .*          ┃" << endl;
		cout << "┃     *.                        .*       ┃" << endl;
		cout << "┃       *.             .*                ┃" << endl;
		cout << "┃           *.                           ┃" << endl;
		cout << "┃            *.             .*           ┃" << endl;
		cout << "┃     *.      *.┏┓┏┓.*대    .*       ┃" << endl;
		cout << "┃             ┏┻┫┣┻┓단             ┃" << endl;
		cout << "┃     *.      ┃━┫┣━┃해      .*     ┃" << endl;
		cout << "┃             ┃━┫┣━┃요~            ┃" << endl;
		cout << "┃        *.   ┗━┛┗━┛               ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                          .*            ┃" << endl;
		cout << "┃  *.           You Win!!          *.    ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                       *.               ┃" << endl;
		cout << "┃    *.         *.                       ┃" << endl;
		cout << "┃                                 *.     ┃" << endl;
		cout << "┃                      *.                ┃" << endl;
		cout << "┃  *.                             *.     ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << endl;
	}

	void ScreenManager::FailureScreen()
	{
		Utility::gotoxy(0, 0);
		cout << "┏━━━━━━━━━━━━━━━━━━━━┓" << endl;
		cout << "┃  ■■■■■■■■■■■■■■■■■■  ┃" << endl;
		cout << "┃  ■■■■■■■■■■■■■■■■■■  ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃             *┭┮  ┭┮*               ┃" << endl;
		cout << "┃          *.  ㅣㅣ▽ㅣㅣ   .*           ┃" << endl;
		cout << "┃   ┏ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ┓     ┃" << endl;
		cout << "┃   ┃다음 번 기회를 이용해 주세요┃     ┃" << endl;
		cout << "┃   ┗ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ┛     ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃    (*⌒⌒*)                            ┃" << endl;
		cout << "┃   ┏O━━━O━━━━━━━━━━┓     ┃" << endl;
		cout << "┃   ┃계속하시겠습니까? <y/n>     ┃     ┃" << endl;
		cout << "┃   ┗━━━━━━━━━━━━━━┛     ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃                                        ┃" << endl;
		cout << "┃  ■■■■■■■■■■■■■■■■■■  ┃" << endl;
		cout << "┃  ■■■■■■■■■■■■■■■■■■  ┃" << endl;
		cout << "┗━━━━━━━━━━━━━━━━━━━━┛" << endl;
	}

	void ScreenManager::ScoreUIScreen()
	{
		Utility::gotoxy(45, 2);
		cout << "스테이지 : " << StageManager::GetInstance()->GetStageLevel();
		Utility::gotoxy(45, 3);
		cout << "생명 : " << StageManager::GetInstance()->Getlife();
		Utility::gotoxy(45, 4);
		cout << "점수 : " << StageManager::GetInstance()->GetScore();
		Utility::gotoxy(45, 5);
		cout << "남은시간 : " << StageManager::GetInstance()->GetextraTime() / 60 << " 분 " << StageManager::GetInstance()->GetextraTime() % 60 << " 초";
	}
}