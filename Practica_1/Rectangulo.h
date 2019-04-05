#pragma once

#include "IFigura.h"
#include "Punto.h"

#include <cmath>
#include <vector>
#include <iostream>

using namespace std;


class Rectangulo : virtual public IFigura
{
protected:
	Punto punto1;
	Punto punto3;

	float areaRect;
	vector<float> puntosRectangulo;

public:
	Rectangulo(Punto punto1, Punto punto3);
	void GetArea();
	void InfoFigura();
	
	float GetAreaVariable() { return areaRect; }

	~Rectangulo() {};

};
