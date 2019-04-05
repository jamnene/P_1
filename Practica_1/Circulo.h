#pragma once

#define _USE_MATH_DEFINES

#include "IFigura.h"
#include "Punto.h"

#include <cmath>
#include <vector>

using namespace std;

class Circulo : virtual public IFigura, public Punto
{
protected:
	Punto centro;
	float radio;

	vector<float> puntosCirculo;

public:
	Circulo(Punto centro, float radio);
	float GetArea();
	vector<float> InfoFigura();

	~Circulo() {};

};
