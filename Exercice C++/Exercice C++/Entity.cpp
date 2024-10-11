#include "Entity.h"
#include <iostream>

Entity::Entity() : position() {

}


void Entity::Setposition(float x, float y)
{
	this->position.Setxy(x,y);
}


Vector2 Entity::Getposition()
{
	return this->position;
}

