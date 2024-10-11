#include "Alive.h"



Alive::Alive() : max_life(0.f), actual_life(0.f)
{
}

Alive::Alive(float maxlife, float actuallife) : max_life(0.f), actual_life(actuallife)
{
}



void Alive::SetMaxlife(float maxlife)
{

    max_life = maxlife;

}

void Alive::Setlife(float actuallife)
{

    actual_life = actuallife;

}



float Alive::Get_max_life()
{
    return max_life;
}

float Alive::Get_actual_life()
{
    return actual_life;
}



void Alive::Set_dommage(float dommage)
{

    actual_life -= dommage;

}
