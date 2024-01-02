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

}

void StatusUnit::RandomGold(int _Min, int _Max)
{
	Gold = (rand() % (_Max - _Min)) + _Min;
}
