#include "Figuras.h"

float Figuras::GetAreaTotal(vector<pair<string, float>> vecFiguras)
{
	for (auto it = vecFiguras.begin(); it != vecFiguras.end(); it++)
	{
		areaTotal += it->second;

	}
	
	return areaTotal;
}

void Figuras::setVecPares(string s, float f)
{
	vec.push_back(make_pair(s, f));
}
