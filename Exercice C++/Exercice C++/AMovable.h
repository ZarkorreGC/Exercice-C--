#pragma once

#include"Vector2.h"

class AMovable
{
	Vector2 Vect_unit_direct;
	float vitesse;
	AMovable(float);

public:

	virtual Vector2 Setdirection();
	virtual float Setspeed();
	virtual void deplacer() = 0;

};

