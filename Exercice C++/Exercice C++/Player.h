#pragma once
#include"Entity.h"
#include"Alive.h"
#include"AMovable.h"
#include"IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
	bool _Dead;
	Vector2 player_position;

public:

	Player();
	Player(float positionx, float positiony, float maxlife, float actuallife, Vector2 deplacer, float _strength);


	void Set_player_position(Vector2 playerposition);

	Vector2 Getposition() override;

	void Set_dommage(float damage) override;

	void deplacer() override;

	void Attaque(Alive* _Alive);

	bool Dead() { return _Dead; }
};

