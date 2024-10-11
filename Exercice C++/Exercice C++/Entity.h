#pragma once
#include <iostream>
#include <string>
#include "Vector2.h"

class Entity {

protected:

    Vector2 position;

public:

    Entity();

    virtual void Setposition(float x, float y);
    virtual Vector2 Getposition();

};