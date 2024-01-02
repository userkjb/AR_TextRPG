#include "Monster.h"
#include <iostream>

void Monster::StatusRenderEnd()
{
	printf_s("°æÇèÄ¡ : %d\n", GetExp());
}

void Monster::FightStart(FightUnit& _Other)
{
	HpReset();
	RandomGold(1000, 10000);
	RandomExp(1000, 10000);
}

void Monster::FightEnd(FightUnit& _Other)
{

}
