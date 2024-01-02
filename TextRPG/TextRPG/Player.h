#pragma once

#include "FightUnit.h"
#include "Weapon.h"

class Player : public FightUnit
{
public :
	Player();

	Weapon Weapon;
};

