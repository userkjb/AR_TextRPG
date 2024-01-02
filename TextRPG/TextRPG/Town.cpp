#include "Town.h"
#include <iostream>
#include <conio.h>

void Town::In(Player& _Player)
{
	while (true)
	{
		printf_s("마을에서 무엇을 하시겠습니까?\n");
		printf_s("1. 강화\n");
		printf_s("2. 치료\n");
		printf_s("3. 나간다.\n");
		int Select = _getch();

		switch (Select)
		{
		case '1':
			break;
		case '2':
			break;
		default:
			break;
		}
		system("cls");
	}
}
