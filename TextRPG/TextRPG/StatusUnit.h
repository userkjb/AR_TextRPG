#pragma once
#include "NameUnit.h"

class StatusUnit : public NameUnit
{
public :
	void StatusRender();

protected :
	char Name[100] = "None";
	int Hp = 0;
	int MaxHp = 100;
	int MinAtt = 10;
	int MaxAtt = 20;
	int Speed = 20;
	int Gold = 0;
};

