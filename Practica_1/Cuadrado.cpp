#include "Cuadrado.h"

void Cuadrado::GetArea()
{
	float longX = fabs(punto1.x - punto3.x);
	float longY = fabs(punto1.y - punto3.y);
	areaRect = longX * longY;
	cout << "El area del CUADRADO es = " << areaRect << "\n";
}



