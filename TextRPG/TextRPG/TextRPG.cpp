#include <iostream>
#include <conio.h>

#include "Player.h"
#include "Monster.h"
#include "FightZone.h"
#include "Town.h"

int main()
{
    int Value = 0;
    __int64 Seed = reinterpret_cast<__int64>(&Value);
    srand(static_cast<unsigned int>(Seed));

    Player NewPlayer = Player();
    NewPlayer.SetName("Player");
    Monster NewMonster = Monster();

    FightZone NewFightZone;
    Town NewTownZone;

    while (true)
    {

        printf_s("어디로 가시겠습니까?\n");
        printf_s("1. 마을.\n");
        printf_s("2. 사냥터.\n");
        
        int Select = _getch();
        system("cls");

        switch (Select)
        {
        case '1' :
            NewTownZone.In(NewPlayer);
            break;
        case '2' :
            NewFightZone.In(NewPlayer);
            break;
        default :
            break;
        }

        system("cls");
    }
}
