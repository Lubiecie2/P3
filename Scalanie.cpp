#include "Scalanie.h"

void MergeSort::Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo) {

	if (lewo < prawo) {
		int srodek = lewo + (prawo - lewo) / 2;
		Scalanie_Dzielenie(tab, lewo, prawo);
		Scalanie_Dzielenie(tab, srodek + 1, prawo);
		Scalanie_Scalanie(tab, lewo, srodek, prawo);
	}
}

void MergeSort::Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo) {
	
	int t1 = srodek - lewo + 1;
	int t2 = prawo - srodek;
	int i = 0;
	int j = 0;
	int k = lewo;

	std::vector<int> lewatab(t1);
	std::vector<int> prawatab(t2);

	for (int i = 0; i < t1; i++)
		lewatab[i] = tab[lewo + i];
	for (int i = 0; i < t2; i++)
		prawatab[i] = tab[srodek + 1 + i];

	while (i < t1 && j < t2) {
		if (lewatab[i] <= prawatab[j]) {
			tab[k] = lewatab[i];
			i++;
		}
		else {
			tab[k] = prawatab[j];
			j++;
		}
		k++;
	}

	while (i < t1) {
		tab[k] = lewatab[i];
		i++;
		k++;
	}

	while (j < t2) {
		tab[k] = prawatab[j];
		j++;
		k++;
	}
}

void MergeSort::Scalanie_Sortowanie(std::vector<int>& tab) {

}

