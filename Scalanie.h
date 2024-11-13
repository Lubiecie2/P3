#pragma once

#include <vector>

class MergeSort {
	
public:
	void Scalanie_Sortowanie(std::vector<int>& tab);
	void Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo);
	void Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo)
};