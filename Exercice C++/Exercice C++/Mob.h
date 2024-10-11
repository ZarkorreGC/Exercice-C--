#pragma once
#include"Entity.h"
#include"Alive.h"
#include"AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{

    bool _Dead;
	Vector2 mob_position;

public :

	Mob();
	Mob(float positionx, float positiony, float maxlife, float actuallife, Vector2 deplacer);


	void Set_mob_position(Vector2 mobposition);

	Vector2 Getposition() override;

	void Set_dommage(float damage) override ;

	void deplacer() override;

	bool Dead() { return _Dead; }
};

