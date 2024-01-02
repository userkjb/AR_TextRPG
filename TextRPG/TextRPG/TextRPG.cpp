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
    
    FightZone NewFightZone[3];
    NewFightZone[0].NewMonster.StatusInit(100, 5, 15);
    NewFightZone[1].NewMonster.StatusInit(200, 10, 20);
    NewFightZone[2].NewMonster.StatusInit(300, 20, 40);

    Town NewTownZone;

    while (true)
    {

        printf_s("어디로 가시겠습니까?\n");
        printf_s("1. 마을.\n");
        printf_s("2. 초급 사냥터.\n");
        printf_s("3. 중급 사냥터.\n");
        printf_s("4. 고급 사냥터.\n");
        
        int Select = _getch();
        system("cls");

        switch (Select)
        {
        case '1' :
            NewTownZone.In(NewPlayer);
            break;
        case '2' :
        case '3' :
        case '4' :
            int FightSelect = Select - '2';
            NewFightZone[FightSelect].In(NewPlayer);
            break;
        default :
            break;
        }

        system("cls");
    }
}
