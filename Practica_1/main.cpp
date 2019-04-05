#include <iostream>

#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
//#include "ColeccionFiguras.h"
#include "Figuras.h"

using namespace std;

int main()
{
	//ColeccionFiguras coleccion;
	
	
	//RECTANGULO////////////////////////////////////////////////////////////////////////////////////
	cout << "Introducir coordenada X primer punto RECTANGULO: " << endl;
	float CoordX1;
	cin >> CoordX1;
	cout << "Introducir coordenada Y primer punto RECTANGULO: " << endl;
	float CoordY1;
	cin >> CoordY1;
	cout << "Introducir coordenada X segundo punto RECTANGULO: " << endl;
	float CoordX3;
	cin >> CoordX3;
	cout << "Introducir coordenada Y segundo punto RECTANGULO: " << endl;
	float CoordY3;
	cin >> CoordY3;

	Punto *punto1 = new Punto(CoordX1, CoordY1);
	Punto *punto3 = new Punto(CoordX3, CoordY3);
	Rectangulo *rect = new Rectangulo(*punto1, *punto3);
	
	//ColeccionFiguras<IFigura> *colFiguras = new ColeccionFiguras<IFigura>();
	//ColeccionFiguras<IFigura> col;
	//col.getItemColeccion().push_back(*rect);
	//col.Rectangulo::GetArea();
	float areaRect = rect->GetArea();
	cout << "El area del RECTANGULO es = " << areaRect << endl;
	
	Figuras figuras;
	figuras.setVecPares("Rectangulo", areaRect);
	/*vector<pair<string, float>> vectorFiguras = figuras.getVecPares();
	vectorFiguras.push_back(make_pair("Rectangulo", areaRect));*/

	vector<float> v = rect->InfoFigura();
	float tmp = 0;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		int index = distance(v.begin(), it);

		if ((index % 2) == 0) //par
		{
			tmp = *it;
		}
		else
		{
			cout << "Punto de la figura: " << tmp << ", " << *it << endl;
		}	
	}
	//END_RECTANGULO////////////////////////////////////////////////////////////////////////////////////
	
	//CIRCULO////////////////////////////////////////////////////////////////////////////////////
	cout << "Introducir coordenada X del centro CIRCULO: " << endl;
	float centroX;
	cin >> centroX;
	cout << "Introducir coordenada Y del centro CIRCULO: " << endl;
	float centroY;
	cin >> centroY;
	cout << "Introducir radio CIRCULO: " << endl;
	float radio;
	cin >> radio;

	Punto *centro = new Punto(centroX, centroY);
	Circulo *circ = new Circulo(*centro, radio);

	float areaCirc = circ->GetArea();
	cout << "El area del CIRCULO es = " << areaCirc << endl;

	figuras.setVecPares("Circulo", areaCirc);
	//figuras.getVecPares().push_back(make_pair("Circulo", areaCirc));

	vector<float> v1 = circ->InfoFigura();
	float tmp1 = 0;
	for (auto it = v1.begin(); it != v1.end(); it++)
	{
		int index = distance(v1.begin(), it);

		if (((index % 2) == 0) && (index != 2)) //par y distinto de 2
		{
			tmp1 = *it;
		}
		else if ((index % 2) != 0) //impar
		{
			cout << "Centro de la figura: " << tmp1 << ", " << *it << endl;
		}
		else
		{
			cout << "Radio de la figura: " << *it << endl;
		}
	}
	//END_CIRCULO////////////////////////////////////////////////////////////////////////////////////
	
	//CUADRADO////////////////////////////////////////////////////////////////////////////////////
	cout << "Introducir coordenada X primer punto CUADRADO: " << endl;
	float CoordX1C;
	cin >> CoordX1C;
	cout << "Introducir coordenada Y primer punto CUADRADO: " << endl;
	float CoordY1C;
	cin >> CoordY1C;
	cout << "Introducir coordenada X segundo punto CUADRADO: " << endl;
	float CoordX3C;
	cin >> CoordX3C;
	cout << "Introducir coordenada Y segundo punto CUADRADO: " << endl;
	float CoordY3C;
	cin >> CoordY3C;

	Punto *punto1C = new Punto(CoordX1C, CoordY1C);
	Punto *punto3C = new Punto(CoordX3C, CoordY3C);
	Cuadrado *cuad = new Cuadrado(*punto1C, *punto3C);

	float areaCuad = cuad->GetArea();
	cout << "El area del CUADRADO es = " << areaCuad << endl;

	figuras.setVecPares("Cuadrado", areaCuad);
	//figuras.getVecPares().push_back(make_pair("Circulo", areaCuad));

	vector<float> v2 = cuad->InfoFigura();
	float tmp2 = 0;
	for (auto it = v2.begin(); it != v2.end(); it++)
	{
		int index = distance(v2.begin(), it);

		if ((index % 2) == 0) //par
		{
			tmp2 = *it;
		}
		else
		{
			cout << "Punto de la figura: " << tmp2 << ", " << *it << endl;
		}
	}
	//END_CUADRADO////////////////////////////////////////////////////////////////////////////////////

	cout << "El area total de todas las figuras es: " << figuras.GetAreaTotal(figuras.getVecPares()) << endl;


	//Ssystem("pause");

}