#pragma once
#include "StatusUnit.h"

class FightUnit : public StatusUnit
{
public :
	FightUnit();

	inline bool IsDeath() const
	{
		return Hp <= 0;
	}

	virtual int GetRandomAtt();

	int GetRandomSpeed() const;

	void DamageLogic(FightUnit& _Unit);

	void DamageRender();

	virtual void FightStart(FightUnit& _Other) {}
	virtual void FightEnd(FightUnit& _Other) {}

protected :
	int CurDamage = 0;
};

