#include "StaticObject.h"


StaticObject::StaticObject() : 
{
}

StaticObject::StaticObject(float positionx, float positiony)
{
    Setposition(positionx, positiony);
    std::cout << "Static Object just created at x = " + std::to_string(position.Getx()) + " and y = " + std::to_string(position.Gety()) << std::endl;

}



Vector2 StaticObject::Getposition()
{
    return Entity::Getposition();
}
