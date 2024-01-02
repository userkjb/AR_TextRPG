#include "Town.h"
#include <iostream>
#include <conio.h>
#include "Player.h"

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

void Town::WeaponUp(Player& _Player)
{
	while (true)
	{
		system("cls");

		int EquipUp = _Player.Weapon.GetEquipUp();

		_Player.StatusRender();
		printf_s("---------------------------------------\n");
		printf_s("��ȭ��ġ %d\n", EquipUp);
		printf_s("---------------------------------------\n");
		printf_s("1. ��ȭ\n");
		printf_s("2. ������\n");

		int Select = _getch();

		switch (Select)
		{
		case '1' :
		{
			int Random = rand() % 100;
			if (Random != 0)
			{
				_Player.Weapon.EquipLevelUp();
				printf_s("��ȭ�� �����߽��ϴ�.\n");
			}
			else if (Random == 0)
			{
				int CurEquipUp = _Player.Weapon.GetEquipUp();
				if (10 <= CurEquipUp && 20 >= CurEquipUp)
				{
					_Player.Weapon.EquipLevelDown(5);
				}
				else if (20 <= CurEquipUp)
				{
					_Player.Weapon.EquipLevelReset();
				}

				printf_s("��ȭ�� �����߽��ϴ�.\n");
			}
			int Test = _getch();
			break;
		}
		case '2':
			break;
		default :
			break;
		}
	}
}

void Town::Heal(Player& _Player)
{
	_Player.HpReset();
	printf_s("�÷��̾�� ġ��Ǿ����ϴ�.");
	int Select = _getch();
}
