#pragma once

#include "IFigura.h"
#include "Punto.h"
#include "Rectangulo.h"

#include <cmath>
#include <vector>
#include <iostream>

class Cuadrado : public Rectangulo//, public virtual IFigura
{
protected:
	/*Punto punto1;
	Punto punto3;
	Punto punto2;
	Punto punto4;*/

	//vector<float> puntosCuadrado;

public:
	Cuadrado(Punto punto1, Punto punto3);
	//PREGUNTAR A LA PROFE SI TIENEN QUE DEFINIRSE AQUI LOS METODOS GETAREA() E INFOFIGURA() ????????????????
	~Cuadrado();
};