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

	inline int GetGold()
	{
		return Gold;
	}

	inline int GetExp()
	{
		return Exp;
	}

	inline void AddExp(int _Exp)
	{
		Exp += _Exp;
	}

	void StatusInit(int _Hp, int _MinAtt, int _MaxAtt)
	{
		SetMaxHp(_Hp);
		SetHp(_Hp);
		SetMinAtt(_MinAtt);
		SetMaxAtt(_MaxAtt);
	}

	void SetHp(int _Value)
	{
		// ���!
		if (MaxHp < _Value)
		{
			_Value = MaxHp;
		}
		Hp = _Value;
	}

	void SetMaxHp(int _Value)
	{
		MaxHp = _Value;
	}

	void SetMinAtt(int _Value)
	{
		MinAtt = _Value;
	}

	void SetMaxAtt(int _Value)
	{
		MaxAtt = _Value;
	}


	void RandomGold(int _Min, int _Max);
	void RandomExp(int _Min, int _Max);
	int RandomValue(int _Min, int _Max);

	virtual void StatusRenderStart();
	virtual void StatusRenderBase();
	virtual void StatusRenderEnd();

protected :
	int Hp = 100;
	int MaxHp = 100;
	int MinAtt = 10;
	int MaxAtt = 20;
	int Speed = 20;
	int Gold = 0;
	int Exp = 0;
};
