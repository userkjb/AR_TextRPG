#pragma once

#include "StatusUnit.h"
#include "Weapon.h"

class Player : public StatusUnit
{
public :
	Player();

	Weapon Weapon;
private :
};

