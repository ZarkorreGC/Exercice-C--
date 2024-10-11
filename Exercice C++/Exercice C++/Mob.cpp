#include "Mob.h"

Mob::Mob(): _Dead(false)
{
}

Mob::Mob(float positionx, float positiony, float maxlife, float actuallife, Vector2 deplacer): _Dead(false)
{

	Entity::Setposition(positionx, positiony);
	SetMaxlife(maxlife);
	Setlife(maxlife);
	mob_position.Setxy(deplacer.Getx(), deplacer.Gety());
	std::cout << "Mob just created at x = " + std::to_string(Getposition().Getx()) + " and y = " + std::to_string(Getposition().Gety()) + " with " + std::to_string(Get_max_life()) + " with direction x = " + std::to_string(mob_position.Getx()) + " and y = " + std::to_string(mob_position.Gety()) << std::endl;

}

void Mob::Set_mob_position(Vector2 mobposition)
{

    this->mob_position =mobposition;

}

Vector2 Mob::Getposition()
{
    return Entity::Getposition();
}

void Mob::Set_dommage(float dommage)
{

    	Alive::Set_dommage(dommage);
	if (Get_actual_life() <= 0 )
	{
		std::cout << " Mob Just Die " << std::endl;
		_Dead = true;
	}

}

void Mob::deplacer()
{

	Vector2 mob_deplacement = mob_position - Getposition();
	Entity::Setposition(Getposition().Getx() + mob_deplacement.Getx(), Getposition().Gety() + mob_deplacement.Gety());
	std::cout << "Mob move to x = " + std::to_string(Getposition().Getx()) + " and y = " + std::to_string(Getposition().Gety()) << std::endl;

}
