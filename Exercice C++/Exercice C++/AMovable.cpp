#include "AMovable.h"


AMovable::AMovable() : Vect_unit_direct(Vector2()), vitesse(1.f)
{
}
AMovable::AMovable(float positionx, float positiony, float _vitesse) : Vect_unit_direct(Vector2(positionx,positiony)), vitesse(_vitesse)
{
}

void AMovable::Setdirection(float x, float y)
{
	this->Vect_unit_direct.Setxy(x, y);
}

void AMovable::Setspeed(float _vitesse)
{
	this->vitesse = _vitesse;
}

float AMovable::Getspeed() const
{
    return vitesse;
}
