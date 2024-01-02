#pragma once
#include "StatusUnit.h"

class FightUnit : public StatusUnit
{
public :
	FightUnit();

	virtual int GetRandomAtt();

	int GetRandomSpeed() const;

	void DamageLogic(FightUnit& _Unit);

	void DamageRender();

protected :
	int CurDamage = 0;
};

