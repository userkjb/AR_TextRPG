#pragma once
class StatusUnit
{
public :
	void StatusRender();

	void SetName(const char* _Name);

protected :
	char Name[100] = "None";
	int Hp = 0;
	int MaxHp = 100;
	int MinAtt = 10;
	int MaxAtt = 20;
	int Speed = 20;
	int Gold = 0;
};

