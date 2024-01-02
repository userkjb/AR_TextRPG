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
