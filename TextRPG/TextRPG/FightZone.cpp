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
	while (true)
	{
		bool IsEnd = false;

		if (_Player.GetRandomSpeed() >= NewMonster.GetRandomSpeed())
		{
			printf_s("플레이어의 선공\n");
		}
		else
		{
			printf_s("몬스터의 선공\n");
		}
	}
}
