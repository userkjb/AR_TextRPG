#include "Player.h"
#include <iostream>

Player::Player()
{
	Weapon.SetName("Steel Sword");
	Weapon.SetAtt(10);
}

void Player::FightEnd(FightUnit& _Other)
{
	int Gold = _Other.GetGold();
	printf_s("플레이어가 %d 골드를 벌었습니다.\n", Gold);
	AddGold(Gold);
}

