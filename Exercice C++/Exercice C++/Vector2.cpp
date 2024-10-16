#include "Vector2.h"
#include <sstream>



Vector2::Vector2() :x(0.f), y(0.f) {
}

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}




float Vector2::Getx() const {

	return this->x;
}

float Vector2::Gety() const {

	return this->y;
}

void Vector2::Setxy(float _x, float _y)
{    
	this->x = _x;
    this->y = _y;
}

void Vector2::Setxy(std::string _xStr, std::string _yStr)
{
	this->x = std::stof(_xStr);
	this->y = std::stof(_yStr);

}

void Vector2::Setx(float _x)
{

    this->x = _x;
}

void Vector2::Setx(std::string _xStr) {

	this->x = std::stof(_xStr);

}




void Vector2::Sety(float _y) {

	y = _y;

}

void Vector2::Sety(std::string _yStr) {

	this->y = std::stof(_yStr);

}





Vector2 Vector2::operator+(const Vector2& _right)
{
	Vector2 tmp(this->x + _right.Getx(), this->y + _right.Gety());
	return tmp;
}

Vector2 Vector2::operator+=(const Vector2& _right)
{
	Vector2 tmp(this->x += _right.Getx(), this->y += _right.Gety());
	return tmp;
}

Vector2 Vector2::operator-(const Vector2& _right)
{
	Vector2 tmp(this->x - _right.Getx(), this->y - _right.Gety());
	return tmp;
}

Vector2 Vector2::operator-=(const Vector2& _right)
{
	Vector2 tmp(this->x -= _right.Getx(), this->y -= _right.Gety());
	return tmp;
}

Vector2 Vector2::operator*(const Vector2& _right)
{
	Vector2 tmp(this->x * _right.Getx(), this->y * _right.Gety());
	return tmp;
}

Vector2 Vector2::operator*=(const Vector2& _right)
{
	Vector2 tmp(this->x *= _right.Getx(), this->y *= _right.Gety());
	return tmp;
}

