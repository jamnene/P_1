#include "Circulo.h"

Circulo::Circulo(Punto centro, float radio)
{
	this->centro = centro;
	this->radio = radio;

	puntosCirculo.clear();
	puntosCirculo.push_back(centro.x);
	puntosCirculo.push_back(centro.y);
	puntosCirculo.push_back(radio);

}

float Circulo::GetArea()
{
	return M_PI * pow(radio, 2);
}

vector<float> Circulo::InfoFigura()
{
	return puntosCirculo;
}
