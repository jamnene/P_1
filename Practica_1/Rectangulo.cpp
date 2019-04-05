#include "Rectangulo.h"


Rectangulo::Rectangulo(Punto punto1, Punto punto3) : punto1(punto1), punto3(punto3)
{
	areaRect = 0;

	puntosRectangulo.clear();
	puntosRectangulo.push_back(punto1.x);
	puntosRectangulo.push_back(punto1.y); 
	puntosRectangulo.push_back(punto3.x);
	puntosRectangulo.push_back(punto3.y);
}

void Rectangulo::GetArea()
{
	float longX = fabs(punto1.x - punto3.x);
	float longY = fabs(punto1.y - punto3.y);
	areaRect = longX * longY;
	cout << "El area del RECTANGULO es = " << areaRect << "\n";
}

void Rectangulo::InfoFigura()
{
	float tmp = 0;
	for (auto it = puntosRectangulo.begin(); it != puntosRectangulo.end(); it++)
	{
		int index = (int)distance(puntosRectangulo.begin(), it);

		if ((index % 2) == 0) //par
		{
			tmp = *it;
		}
		else
		{
			cout << "Punto de la figura: " << tmp << ", " << *it << "\n";
		}
	}
}


