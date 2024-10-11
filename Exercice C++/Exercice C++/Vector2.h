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
	
    void Setxy(float x, float y);
    void Setx(float _x);
    void Setx(std::string _xStr);
    void Sety(float _y);
    void Sety(std::string _yStr);


    Vector2 operator+(const Vector2& _right);
	Vector2 operator-(const Vector2& right);
	Vector2 operator*(const float right);
	void operator+=(const Vector2& right);
	void operator-=(const Vector2& right);
	void operator*=(const float right);

};