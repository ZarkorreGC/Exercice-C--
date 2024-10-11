#include "BreakableObject.h"

BreakableObject::BreakableObject(): _Broken(false)
{
}

BreakableObject::BreakableObject(float positionx, float positiony, float maxlife, float actuallife) : _Broken(false)
{

    Setposition(positionx, positiony);
    SetMaxlife(maxlife);
    Setlife(maxlife);
	std::cout << "Breakable Object just created at x = " + std::to_string(position.Getx()) + " and y = " + std::to_string(position.Gety()) + " with " + std::to_string(Get_max_life()) << std::endl;

}

Vector2 BreakableObject::Getposition()
{
    return Entity::Getposition();
}

void BreakableObject::Set_dommage(float dommage)
{

    Alive::Set_dommage(dommage);

    if (Get_actual_life() <= 0)
    {
        std::cout << "Breakable Object just broke" << std::endl;
		_Broken = true;
    }
    

}
