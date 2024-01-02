#include "Town.h"
#include <iostream>
#include <conio.h>
#include "Player.h"

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

void Town::WeaponUp(Player& _Player)
{
	while (true)
	{
		system("cls");

		int EquipUp = _Player.Weapon.GetEquipUp();

		_Player.StatusRender();
		printf_s("---------------------------------------\n");
		printf_s("강화수치 %d\n", EquipUp);
		printf_s("---------------------------------------\n");
		printf_s("1. 강화\n");
		printf_s("2. 나가기\n");

		int Select = _getch();

		switch (Select)
		{
		case '1' :
		{
			int Random = rand() % 100;
			if (Random != 0)
			{
				_Player.Weapon.EquipLevelUp();
				printf_s("강화에 성공했습니다.\n");
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

				printf_s("강화에 실패했습니다.\n");
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
	printf_s("플레이어는 치료되었습니다.");
	int Select = _getch();
}
