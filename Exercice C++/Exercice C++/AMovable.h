#pragma once

#include"Vector2.h"

class AMovable
{
	Vector2 Vect_unit_direct;
	float vitesse;
	AMovable(Vector2,float);

public:

	virtual void Setdirection(Vector2);
	virtual void Setspeed(float);
	virtual Vector2 deplacer() = 0;

};

