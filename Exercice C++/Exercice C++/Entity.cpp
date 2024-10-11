#include "Entity.h"
#include <iostream>

Entity::Entity() : position() {

}


void Entity::Setposition(float x, float y)
{
	this->position.Setxy(x,y);
}


float Entity::Getposition()
{
	return position;
}

