#include "StatusUnit.h"
#include <iostream>

void StatusUnit::StatusRender()
{
	int Size = printf_s("%s", Name);
	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}
}

void StatusUnit::SetName(const char* _Name)
{
	int Count = 0;
	while (_Name[Count])
	{
		++Count;
	}
	for (int i = 0; i < Count + 1; i++)
	{
		Name[i] = _Name[i];
	}
}
