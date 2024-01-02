#include "StatusUnit.h"
#include <iostream>

void StatusUnit::StatusRender()
{
	int Size = printf_s("%s", Name);
	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}
	printf_s("\n");
	StatusRenderStart();
	StatusRenderBase();
	StatusRenderEnd();

	for (int i = 0; i < 50; i++)
	{
		printf_s("-");
	}
	printf_s("\n");
}

void StatusUnit::RandomGold(int _Min, int _Max)
{
	Gold = (rand() % (_Max - _Min)) + _Min;
}

void StatusUnit::StatusRenderStart()
{
}

void StatusUnit::StatusRenderBase()
{
	printf_s("���ݷ� %d ~ %d\n", MinAtt, MaxAtt);
	printf_s("ü�� %d\n", Hp);
	printf_s("������ %d\n", Gold);
}

void StatusUnit::StatusRenderEnd()
{
}
