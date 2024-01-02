#pragma once

#include "FightUnit.h"
#include "Weapon.h"

class Player : public FightUnit
{
public :
	Player();

	Weapon Weapon;

	void FightEnd(FightUnit& _Other) override;

private :
	int Level = 1;
	int LevelUpExp = 0;
};

