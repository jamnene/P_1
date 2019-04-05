#include "Rendimiento.h"

float Rendimiento::GetAreaTotal(vector<pair<string, float>> vecFiguras)
{
	//lo dejo simplemente para probar el rendimiento de varios procesos//////
	/*auto it_begin = vecFiguras.begin();
	auto it_end = vecFiguras.end();
	for (auto it = it_begin; it != it_end; ++it)
	{
		areaTotal += it->second;

	}*/

	for (auto &it : vecFiguras) 
	{
		areaTotal += it.second;
	}

	

	return areaTotal;
}


void Rendimiento::setVecPares(string s, float f)
{
	vec.push_back(make_pair(s, f));
}
