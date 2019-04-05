#include "Circulo.h"

Circulo::Circulo(Punto centro, float radio) : centro(centro), radio(radio)
{
	puntosCirculo.clear();
	puntosCirculo.push_back(centro.x);
	puntosCirculo.push_back(centro.y);
	puntosCirculo.push_back(radio);
	areaCirc = 0;
}

void Circulo::GetArea()
{
	areaCirc = (float)M_PI * pow(radio, 2);
	cout << "El area del CIRCULO es = " << areaCirc << "\n";
}

void Circulo::InfoFigura()
{
	float tmp = 0;
	for (auto it = puntosCirculo.begin(); it != puntosCirculo.end(); it++)
	{
		int index = (int)distance(puntosCirculo.begin(), it);

		if (((index % 2) == 0) && (index != 2)) //par y distinto de 2
		{
			tmp = *it;
		}
		else if ((index % 2) != 0) //impar
		{
			cout << "Centro de la figura: " << tmp << ", " << *it << "\n";
		}
		else
		{
			cout << "Radio de la figura: " << *it << "\n";
		}
	}

}
