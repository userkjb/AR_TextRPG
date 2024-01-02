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
	printf_s("�÷��̾ %d ��带 �������ϴ�.\n", Gold);
	AddGold(Gold);
}

