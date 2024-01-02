#include "FightUnit.h"
#include <iostream>

FightUnit::FightUnit()
{
}

int FightUnit::GetRandomAtt()
{
	int Damage = rand() % ((MaxAtt - MinAtt) + 1);
	CurDamage = MinAtt + Damage;
	return MinAtt + Damage;
}

int FightUnit::GetRandomSpeed() const
{
	return rand() % (Speed + 1);
}

void FightUnit::DamageLogic(FightUnit& _Unit)
{
	Hp -= _Unit.GetRandomAtt();

	if (Hp < 0)
	{
		Hp = 0;
	}
}

void FightUnit::DamageRender()
{
	printf_s("%s �� %d�� ���ݷ����� �����߽��ϴ�.\n", Name, CurDamage);
}
