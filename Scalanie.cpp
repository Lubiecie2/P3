#include "Scalanie.h"

void MergeSort::Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo) {

	if (lewo < prawo) {
		int srodek = lewo + (prawo - lewo) / 2;
		Scalanie_Dzielenie(tab, lewo, prawo);
		Scalanie_Dzielenie(tab, srodek + 1, prawo);
	}
}


