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



void Vector2::Setx(float _x) {

	this->x = _x;

}

void Vector2::Setx(std::string _xStr) {

	this->x = std::stof(_xStr);

}

void Vector2::Sety(float _y) {

	y = _y;

}

Vector2 Vector2::operator+(const Vector2& _right)
{
	Vector2 tmp(this->x + _right.Getx(), this->y + _right.Gety());
	return tmp;
}












//
//std::string Vector2::ToString() {
//
//    std::stringstream stream;
//
//    stream << "Position: x: " << x << ", y: " << y ;
//
//    return stream.str();
//}