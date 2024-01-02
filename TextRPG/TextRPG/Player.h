#pragma once

#include "FightUnit.h"
#include "Weapon.h"

class Player : public FightUnit
{
public :
	Player();

	Weapon Weapon;

	void FightEnd(FightUnit& _Other) override;

	void StatusRenderStart() override;

private :
	int Level = 1;
	int LevelUpExp = 0;
};

