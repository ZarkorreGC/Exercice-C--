#include "World.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "BreakableObject.h"
#include "Entity.h"
#include "Mob.h"
#include "Player.h"
#include "StaticObject.h"
#include "Vector2.h"



World::World()
{
	_Entity.clear();
}


void World::Init()
{
	StaticObject staticObject(0.f, 1.f);
	_Entity.push_back(&staticObject);

	BreakableObject breakableObject(0.f, 2.f, 1.f, 1.f);
	_Entity.push_back(&breakableObject);

	Vector2 mobdirection(1.f, 1.f);
	Mob mob(0.f, 1.f, 20.f, 20.f, mobdirection);
	_Entity.push_back(&mob);

	Vector2 playerdirection(1.f, 1.f);
	Player player(1.f, 1.f, 10.f, 10.f, playerdirection, 2.f);
	_Entity.push_back(&player);
}

void World::Step()
{
	for (int i = 0; i < _Entity.size(); i++)
	{
		Mob* element = dynamic_cast<Mob*>(_Entity[i]);
		if (element != nullptr)
		{
			
			element->Setdirection(0.f, 2.f);
			element->deplacer();
		}
		Player* element1 = dynamic_cast<Player*>(_Entity[i]);
		if (element != nullptr)
		{
			bool mobFound;
			Vector2 mobposition(0.f, 0.f);
			for (int i = 0; i < _Entity.size(); i++)
			{
				Mob* mob = dynamic_cast<Mob*>(_Entity[i]);
				if (mob != nullptr)
				{
					mobposition = mob->Getposition();
					break;
				}
			}
			Vector2 newDirection = element->Getposition() - Vector2(0.0f, 2.0f);
			element->Setdirection(0.f, 2.f);
			element->deplacer();
		}
	}
}