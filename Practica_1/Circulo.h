#pragma once

#define _USE_MATH_DEFINES

#include "IFigura.h"
#include "Punto.h"

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

class Circulo : virtual public IFigura
{
protected:
	Punto centro;
	float radio;

	float areaCirc;
	vector<float> puntosCirculo;

public:
	Circulo(Punto centro, float radio);
	void GetArea();
	void InfoFigura();

	float GetAreaVariable() { return areaCirc; };

	~Circulo() {};

};
