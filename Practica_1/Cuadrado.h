#pragma once

#include "IFigura.h"
#include "Punto.h"
#include "Rectangulo.h"

#include <cmath>
#include <vector>
#include <iostream>

class Cuadrado : public Rectangulo
{
protected:
	

public:
	Cuadrado(Punto punto1, Punto punto3) : Rectangulo(punto1, punto3) {};
	
	void GetArea() override;
	~Cuadrado() {};
};