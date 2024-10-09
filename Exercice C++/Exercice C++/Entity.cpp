#include "Entity.h"
#include <iostream>

Entity::Entity() : position(0.f, 0.f) {


}

Entity::Entity(float _position): position(_position)
{
}





float Entity::Getposition()
{
	return position;
}

void Entity::Setposition(float _position)
{
	this->position = _position;
}


