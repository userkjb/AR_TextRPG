#pragma once
#include "NameUnit.h"

class StatusUnit : public NameUnit
{
public :
	void StatusRender();

	inline void HpReset()
	{
		Hp = MaxHp;
	}

protected :
	int Hp = 0;
	int MaxHp = 100;
	int MinAtt = 10;
	int MaxAtt = 20;
	int Speed = 20;
	int Gold = 0;
};

