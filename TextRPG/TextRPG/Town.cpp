#include "Town.h"
#include <iostream>
#include <conio.h>

void Town::In(Player& _Player)
{
	while (true)
	{
		printf_s("�������� ������ �Ͻðڽ��ϱ�?\n");
		printf_s("1. ��ȭ\n");
		printf_s("2. ġ��\n");
		printf_s("3. ������.\n");
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
