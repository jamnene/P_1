#pragma once

#include <vector>
#include "IFigura.h"
//#include "Punto.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"


template<class miTipo>
class ColeccionFiguras : virtual public IFigura, public Rectangulo, public Cuadrado, public Circulo 
{
private:
	vector<miTipo> coleccionFiguras;
	float areaTotal;
	
	
	
public:
	ColeccionFiguras();
	float GetAreasFiguras();
	vector<miTipo> getItemColeccion() {return coleccionFiguras;};
	
	float GetArea() {};
	vector<float> InfoFigura() {};


	~ColeccionFiguras();
};