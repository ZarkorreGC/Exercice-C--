#pragma once
#include"Entity.h"
#include"Alive.h"

class BreakableObject : public Entity, public Alive
{	
    
    bool _Broken;

public:
	BreakableObject();
	BreakableObject(float positionx, float positiony, float maxlife, float actuallife);

	bool Broken() { return _Broken; }

	Vector2 Getposition() override;
	void Set_dommage(float dommage) override;
};

