#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"


class World {

	std::vector<Entity*> _Entity;

public:

	World();

	void Init();
	void Step();


};