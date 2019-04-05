#include "ColeccionFiguras.h"

template<class miTipo>
ColeccionFiguras<miTipo>::ColeccionFiguras() : Rectangulo(Rectangulo::punto1, Rectangulo::punto3), 
									   Cuadrado(Cuadrado::punto1, Cuadrado::punto3), Circulo(centro, radio)
{
	coleccionFiguras.reserve(10);
	areaTotal = 0;
}

template<class miTipo>
float ColeccionFiguras<miTipo>::GetAreasFiguras()
{
	for (auto it = coleccionFiguras.begin(); it != coleccionFiguras.end(); it++)
	{
		//areaTotal += it
	}

	return areaTotal;
}

//ColeccionFiguras::~ColeccionFiguras()
//{
//}
