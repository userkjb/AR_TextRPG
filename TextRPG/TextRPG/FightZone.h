#pragma once
#include "ZoneBase.h"
#include "Monster.h"

class FightZone : public ZoneBase
{
public :
	FightZone();

	Monster NewMonster = Monster();

	void In(class Player& _Player);
};

