#pragma once
#include "Alive.h"

class IAttacker
{

protected:

	float strength;

public:

	IAttacker(float _strength);

	virtual void Attaque(Alive* target);


};