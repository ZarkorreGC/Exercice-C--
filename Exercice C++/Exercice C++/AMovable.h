#pragma once

#include"Vector2.h"

class AMovable
{
	
	Vector2 Vect_unit_direct;
	float vitesse;


public:

	AMovable();
	AMovable(float positionx,float positiony,float vitesse);

	virtual void Setdirection(float x,float y);
	virtual void Setspeed(float vitesse);

	virtual void deplacer() = 0;

	float Getspeed() const;

};