#pragma once
#include <iostream>
#include <string>
#include "Vector2.h"

class Entity {

    Vector2 position;

public:

    Entity();

    virtual void Setposition(float x, float y);
    virtual float Getposition();

};