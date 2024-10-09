#include "AMovable.h"


AMovable::AMovable(Vector2 _Vect_unit_direct, float _vitesse) : Vect_unit_direct(0.f, 0.f), vitesse(_vitesse)
{
}

void AMovable::Setdirection(Vector2 _Vect_unit_direct)
{

	this->Vect_unit_direct = _Vect_unit_direct;

}

void AMovable::Setspeed(float _vitesse)
{
	this->vitesse = _vitesse;
}

Vector2 AMovable::deplacer()
{
	return Vector2();
}

