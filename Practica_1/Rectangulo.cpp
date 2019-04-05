#include "Rectangulo.h"


Rectangulo::Rectangulo(Punto punto1, Punto punto3)
{
	this->punto1 = punto1;
	this->punto3 = punto3;

	//definimos punto2 y punto4
	if(punto1.x < punto3.x)
	{
		this->punto2.x = punto3.x;
		this->punto4.x = punto1.x;
	}
	else
	{
		this->punto2.x = punto1.x;
		this->punto4.x = punto3.x;
	}
	if (punto1.y < punto3.y)
	{
		this->punto2.y = punto1.y;
		this->punto4.y = punto3.y;
	}
	else
	{
		this->punto2.y = punto3.y;
		this->punto4.y = punto1.y;
	}

	puntosRectangulo.clear();
	puntosRectangulo.push_back(punto1.x);
	puntosRectangulo.push_back(punto1.y); 
	puntosRectangulo.push_back(punto2.x);
	puntosRectangulo.push_back(punto2.y);
	puntosRectangulo.push_back(punto3.x);
	puntosRectangulo.push_back(punto3.y);
	puntosRectangulo.push_back(punto4.x);
	puntosRectangulo.push_back(punto4.y);
}

float Rectangulo::GetArea()
{
	float longX = fabs(punto1.x - punto3.x);
	float longY = fabs(punto1.y - punto3.y);
		
	return longX * longY;
}

vector<float> Rectangulo::InfoFigura()
{
	return puntosRectangulo;
}


