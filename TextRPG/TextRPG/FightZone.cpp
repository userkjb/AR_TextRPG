#include "FightZone.h"
#include <iostream>
#include <conio.h>
#include "Player.h"

FightZone::FightZone()
{
	NewMonster.SetName("Monster");
}

void FightZone::In(Player& _Player)
{
	NewMonster.HpReset();
	NewMonster.RandomGold(1000, 10000);

	while (true)
	{
		_Player.StatusRender();
		NewMonster.StatusRender();

		bool IsEnd = false;

		if (_Player.GetRandomSpeed() >= NewMonster.GetRandomSpeed())
		{
			printf_s("�÷��̾��� ����\n");
			IsEnd = FightLogic(_Player, NewMonster, _Player, NewMonster);
		}
		else
		{
			printf_s("������ ����\n");
			IsEnd = FightLogic(_Player, NewMonster, _Player, NewMonster);
		}

		if (IsEnd == true)
		{
			if (_Player.IsDeath() == false)
			{
				int MonsterGold = NewMonster.GetGold();
				printf_s("�÷��̾ %d ��带 �������ϴ�.\n", MonsterGold);
				_Player.AddGold(MonsterGold);
				int test = _getch();
			}
		}
	}
}

bool FightZone::FightLogic(FightUnit& _First, FightUnit& _Second, FightUnit& _Top, FightUnit& _Bot)
{
	{
		int Input = _getch();
	}

	system("cls");
	_Second.DamageLogic(_First);
	_Top.StatusRender();
	_Bot.StatusRender();
	_First.DamageRender();
	
	if (true == _Second.IsDeath())
	{
		printf_s("���� ����\n");
		return true;
	}

	{
		int Input = _getch();
	}
	system("cls");
	_First.DamageLogic(_Second);
	_Top.StatusRender();
	_Bot.StatusRender();
	_First.DamageRender();
	_Second.DamageRender();
	if (true == _First.IsDeath())
	{
		printf_s("���� ����\n");
		return true;
	}

	{
		int Input = _getch();
	}
	system("cls");

	return false;
}
