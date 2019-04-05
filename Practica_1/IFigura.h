#pragma once

#include "Punto.h"
#include <vector>

using namespace std;

class IFigura
{

public:
	virtual void GetArea() = 0;
	virtual void InfoFigura() = 0;


	virtual ~IFigura() {};
};