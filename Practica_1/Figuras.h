#pragma once

#include <utility>
#include <string>
#include <vector>

#include "Punto.h"

using namespace std;

class Figuras
{
private:
	vector<pair<string, float>> vec;
	float areaTotal;

public:
	Figuras() {
		vec.reserve(10); // reservamos un m�ximo de 10
		areaTotal = 0;
	};
	float GetAreaTotal(vector<pair<string, float>> vecFiguras);
	vector<pair<string, float>> getVecPares() { return vec; }
	void setVecPares(string, float);

	~Figuras() {};
};