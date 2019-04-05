#include "RandomFigures.h"

void RandomFigures::RandomRectangle()
{
	float x1 = (float)rand() / (float)10;
	float y1 = (float)rand() / (float)10;
	float x3 = (float)rand() / (float)10;
	float y3 = (float)rand() / (float)10;
	Punto *punto1 = new Punto(x1, y1);
	Punto *punto3 = new Punto(x3, y3);
	float longX = fabs(punto1->x - punto3->x);
	float longY = fabs(punto1->y - punto3->y);
	float areaRect = longX * longY;
	rendimientoRandom.setVecPares("Rectangulo", areaRect);
}

void RandomFigures::RandomCircle()
{
	float xCentro = (float)rand() / (float)10;
	float yCentro = (float)rand() / (float)10;
	float radio = (float)rand() / (float)10;
	float areaCirc = (float)M_PI * pow(radio, 2);
	rendimientoRandom.setVecPares("Circulo", areaCirc);
}

void RandomFigures::RandomCube()
{
	float x1C = (float)rand() / (float)10;
	float y1C = (float)rand() / (float)10;
	float x3C = (float)rand() / (float)10;
	float y3C = (float)rand() / (float)10;
	Punto *punto1C = new Punto(x1C, y1C);
	Punto *punto3C = new Punto(x3C, y3C);
	float longX = fabs(punto1C->x - punto3C->x);
	float longY = fabs(punto1C->y - punto3C->y);
	float areaCuad = longX * longY;
	rendimientoRandom.setVecPares("Cuadrado", areaCuad);
}

float RandomFigures::GetAreaTotalFigurasRandom()
{
	float areaTotalFigurasRandom = rendimientoRandom.GetAreaTotal(rendimientoRandom.getVecPares());
	return areaTotalFigurasRandom;
}


