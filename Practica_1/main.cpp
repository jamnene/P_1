#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>  // for_each es parte de algorithm
#include <ctime>
#define MAX  100000
//segunda subida ////////////////


#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Figuras.h"
#include "Rendimiento.h"
#include "RandomFigures.h"

using namespace std;

RandomFigures figurasRandom;

int main()
{
	//RECTANGULO//////////////////////////
	cout << "Introducir coordenada X primer punto RECTANGULO: " << "\n";
	float CoordX1;
	cin >> CoordX1;
	cout << "Introducir coordenada Y primer punto RECTANGULO: " << "\n";
	float CoordY1;
	cin >> CoordY1;
	cout << "Introducir coordenada X segundo punto RECTANGULO: " << "\n";
	float CoordX3;
	cin >> CoordX3;
	cout << "Introducir coordenada Y segundo punto RECTANGULO: " << "\n";
	float CoordY3;
	cin >> CoordY3;

	Punto *punto1 = new Punto(CoordX1, CoordY1);
	Punto *punto3 = new Punto(CoordX3, CoordY3);
	Rectangulo *rect = new Rectangulo(*punto1, *punto3);
	
	rect->GetArea();	
	Figuras figuras;
	figuras.setVecPares("Rectangulo", rect->GetAreaVariable());
	rect->InfoFigura();

	//END_RECTANGULO/////////////////////

	
	//CIRCULO////////////////////////////
	cout << "Introducir coordenada X del centro CIRCULO: " << "\n";
	float centroX;
	cin >> centroX;
	cout << "Introducir coordenada Y del centro CIRCULO: " << "\n";
	float centroY;
	cin >> centroY;
	cout << "Introducir radio CIRCULO: " << "\n";
	float radio;
	cin >> radio;

	Punto *centro = new Punto(centroX, centroY);
	Circulo *circ = new Circulo(*centro, radio);

	circ->GetArea();
	figuras.setVecPares("Circulo", circ->GetAreaVariable());
	circ->InfoFigura();

	//END_CIRCULO/////////////////////
	
	//CUADRADO////////////////////////
	cout << "Introducir coordenada X primer punto CUADRADO: " << "\n";
	float CoordX1C;
	cin >> CoordX1C;
	cout << "Introducir coordenada Y primer punto CUADRADO: " << "\n";
	float CoordY1C;
	cin >> CoordY1C;
	cout << "Introducir coordenada X segundo punto CUADRADO: " << "\n";
	float CoordX3C;
	cin >> CoordX3C;
	cout << "Introducir coordenada Y segundo punto CUADRADO: " << "\n";
	float CoordY3C;
	cin >> CoordY3C;

	Punto *punto1C = new Punto(CoordX1C, CoordY1C);
	Punto *punto3C = new Punto(CoordX3C, CoordY3C);
	Cuadrado *cuad = new Cuadrado(*punto1C, *punto3C);

	cuad->GetArea();
	figuras.setVecPares("Cuadrado", cuad->GetAreaVariable());
	cuad->InfoFigura();
	//END_CUADRADO///////////////////
	
	cout << "\n" << "EL AREA TOTAL DE TODAS LAS FIGURAS ES: " << figuras.GetAreaTotal(figuras.getVecPares()) << "\n";
	cin.ignore();
	


	//PRUEBA DE RENDIMIENTO////////////////////////////////////////////////////////////////////////
	cout << "\n";
	cout << "Pulsar Enter para iniciar PRUEBA DE RENDIMIENTO";
	cin.ignore();

	std::srand((unsigned)std::time(nullptr));
	
	for (int i = 0; i < MAX; ++i)
	{
		int number = rand() % 3 + 1;
		switch (number)
		{
		case 1:
			figurasRandom.RandomRectangle();
			break;
		case 2:
			figurasRandom.RandomCircle();
			break;
		case 3:
			figurasRandom.RandomCube();
			break;
		default:
			break;
		}
	}
		
	cout << "timing" << "\n";
	clock_t t;
	t = clock();

	float areaTotalFigurasRandom = figurasRandom.GetAreaTotalFigurasRandom();

	t = clock() - t;
	cout << "\n" << "tiempo gastado: " << t << "\n";
	cout << "Area total de todas las FIGURAS RANDOM: " << areaTotalFigurasRandom << "\n";



}

