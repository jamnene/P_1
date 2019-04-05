#pragma once

#include "Punto.h"
#include <vector>

using namespace std;

class IFigura : public Punto
{

public:
	virtual float GetArea() = 0;
	virtual vector<float> InfoFigura() = 0;


	virtual ~IFigura() {};
};