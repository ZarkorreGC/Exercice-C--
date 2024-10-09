#pragma once
#include"Entity.h"
#include"Alive.h"
#include"AMovable.h"
#include"IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
    int life;

public:
    Player();

    //bool IsAlive() override;
    //void TakeDamage(int _dmg) override;
};


