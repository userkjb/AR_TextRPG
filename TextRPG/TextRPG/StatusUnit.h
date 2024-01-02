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

	inline void AddGold(int _Gold)
	{
		Gold += _Gold;
	}

	inline int GetCold()
	{
		return Gold;
	}

	void RandomGold(int _Min, int _Max);

protected :
	int Hp = 0;
	int MaxHp = 100;
	int MinAtt = 10;
	int MaxAtt = 20;
	int Speed = 20;
	int Gold = 0;
};
