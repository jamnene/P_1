#pragma once

#include <utility>
#include <string>
#include <vector>
#include <algorithm>

#define MAX  100000

#include "Punto.h"

using namespace std;

class Rendimiento
{
private:
	vector<pair<string, float>> vec;
	float areaTotal;

public:
	Rendimiento() {vec.reserve(MAX);areaTotal = 0;};
	float GetAreaTotal(vector<pair<string, float>> vecFiguras);
	vector<pair<string, float>> getVecPares() { return vec; }
	void setVecPares(string, float);

	~Rendimiento() {};
};
