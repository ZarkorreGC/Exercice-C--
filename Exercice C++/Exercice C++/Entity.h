#pragma once

#include "Vector2.h"

class Entity {

    Vector2 position;


public:


    Entity();
    Entity(float _position);


    virtual float Getposition();

    virtual void Setposition(float _position);

};

