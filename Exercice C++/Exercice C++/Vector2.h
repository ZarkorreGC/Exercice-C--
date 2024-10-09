#pragma once
#include <string>

class Vector2
{
    float x;
    float y;

public:

    Vector2();
    Vector2(float _x, float _y);

    float Getx() const ;
    float Gety() const ; 

    void Setx(float _x);
    void Setx(std::string _xStr);
    void Sety(float _y);

    Vector2 operator+(const Vector2& _right);


};

