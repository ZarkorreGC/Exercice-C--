#pragma once

#include"Vector2.h"

class AMovable
{
	
	Vector2 Vect_unit_direct;
	float vitesse;

	AMovable();
	AMovable(float positionx,float positiony,float vitesse);

public:

	virtual void Setdirection(float x,float y);
	virtual void Setspeed(float vitesse);

	virtual void deplacer() = 0;

	float Getspeed();

};