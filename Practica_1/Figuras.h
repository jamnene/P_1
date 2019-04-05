#pragma once

#include <utility>
#include <string>
#include <vector>

#include "Punto.h"

using namespace std;

class Figuras : public Punto
{
private:
	//pair<string, vector<float>> figuras;
	vector<pair<string, float>> vec;
	float areaTotal;

public:
	Figuras();
	float GetAreaTotal(vector<pair<string, float>> vecFiguras);
	vector<pair<string, float>> getVecPares() { return vec; }
	void setVecPares(string, float);

	~Figuras() {};
};