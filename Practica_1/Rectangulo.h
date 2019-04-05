#pragma once

#include "IFigura.h"
#include "Punto.h"

#include <cmath>
#include <vector>

using namespace std;


class Rectangulo : virtual public IFigura, public Punto
{
protected:
	Punto punto1;
	Punto punto3;
	Punto punto2;
	Punto punto4;

	vector<float> puntosRectangulo;

public:
	Rectangulo(Punto punto1, Punto punto3);
	float GetArea();
	vector<float> InfoFigura();
	
	~Rectangulo() {};

};
