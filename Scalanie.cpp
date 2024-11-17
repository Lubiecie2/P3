#include "Scalanie.h"

void MergeSort::Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo) {  // <-- Funkcja jest odpowiedzialana za rekursywne dzielenie tablicy 

	if (lewo < prawo) {									
		int srodek = lewo + (prawo - lewo) / 2;		// <-- Tablica jest dzielona na dwie czêœci 
		
		Scalanie_Dzielenie(tab, lewo, srodek);		    // <-- Rekursywnie jest dzielona lewa czêœæ tablicy

		Scalanie_Dzielenie(tab, srodek + 1, prawo);		// <-- Rekursywnie jest dzielona prawa czêœæ tablicy 

		Scalanie_Scalanie(tab, lewo, srodek, prawo);	// <-- Wywo³ywana jest funkcja która dzieli dwie posortowane czêœci 
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

void MergeSort::Scalanie_Sortowanie(std::vector<int>& tab) {   // <-- Funkcja jest odpowiedzialna za wywo³anie g³ównego procesu sortowania przez scalanie
	if (!tab.empty()) {										   // <-- Sprawdzamy czy tablica nie jest pusta
		Scalanie_Dzielenie(tab, 0, tab.size() - 1);			   // <-- Jeœli zawiera elementy, wywo³ujemy funkcje która dzieli tablice na mniejsze czêœci,
	}														   //     a¿ do momentu osi¹gniêcia wartoœci pojedycznych 
}

