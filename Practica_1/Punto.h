#pragma once

class Punto
{
private:

public:
	float x;
	float y;
	Punto() { x = 0; Punto::y = 0;};
	Punto(float x, float y) {this->x = x;this->y = y;};
	~Punto() {};

};

