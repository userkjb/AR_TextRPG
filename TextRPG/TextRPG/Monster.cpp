#include "Monster.h"

void Monster::FightStart(FightUnit& _Other)
{
	HpReset();
	RandomGold(1000, 10000);
}

void Monster::FightEnd(FightUnit& _Other)
{

}
