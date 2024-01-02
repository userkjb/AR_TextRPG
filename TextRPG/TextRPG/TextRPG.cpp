#include <iostream>
#include <conio.h>

#include "Player.h"
#include "Monster.h"

int main()
{
    Player NewPlayer = Player();
    Monster NewMonster = Monster();

    NewMonster.SetName("Monater");

    while (true)
    {
        NewPlayer.SetName("Player");

        printf_s("어디로 가시겠습니까?\n");
        printf_s("1. 마을.\n");
        printf_s("2. 사냥터.\n");
        int Select = _getch();

        system("cls");

        switch (Select)
        {
        case '1' :
            printf_s("111");
            break;
        case '2' :
            printf_s("222");
            break;
        default :
            break;
        }

        system("cls");
    }
}
