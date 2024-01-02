#include <iostream>

#include "Player.h"
#include "Monster.h"

int main()
{
    Player NewPlayer = Player();
    Monster NewMonster = Monster();

    NewPlayer.SetName("Player");
    NewMonster.SetName("Monater");

    NewPlayer.StatusRender();
    NewMonster.StatusRender();
}
