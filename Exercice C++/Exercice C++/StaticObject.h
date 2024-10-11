#pragma once
#include"Entity.h"

class StaticObject : public Entity
{

public:

	StaticObject();
	StaticObject(float positionx, float positiony);

	Vector2 Getposition() override;

};

