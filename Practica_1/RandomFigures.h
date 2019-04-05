#pragma once
#define _USE_MATH_DEFINES

#include "IFigura.h"
#include "Punto.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Rendimiento.h"

class RandomFigures : public Punto
{
private:
	Rendimiento rendimientoRandom;
public:
	void RandomRectangle();
	void RandomCircle();
	void RandomCube();
	float GetAreaTotalFigurasRandom();
	Rendimiento GetRendimientoRandom() {return rendimientoRandom;};
};