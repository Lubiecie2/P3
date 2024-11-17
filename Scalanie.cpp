#include "Scalanie.h"

void MergeSort::Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo) {  // <-- Funkcja jest odpowiedzialana za rekursywne dzielenie tablicy 

	if (lewo < prawo) {									
		int srodek = lewo + (prawo - lewo) / 2;			// <-- Tablica jest dzielona na dwie czêœci 
		
		Scalanie_Dzielenie(tab, lewo, srodek);		    // <-- Rekursywnie jest dzielona lewa czêœæ tablicy

		Scalanie_Dzielenie(tab, srodek + 1, prawo);		// <-- Rekursywnie jest dzielona prawa czêœæ tablicy 

		Scalanie_Scalanie(tab, lewo, srodek, prawo);	// <-- Wywo³ywana jest funkcja która dzieli dwie posortowane czêœæ 
	}
}

void MergeSort::Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo) {
	
	int t1 = srodek - lewo + 1;  // <-- Rozmiar lewej podtablicy
	int t2 = prawo - srodek;	 // <-- Rozmiar prawej podtablicy
	int i = 0;		// <-- indeks dla lewej podtablicy
	int j = 0;		// <-- indeks dla prawej podtablicy
	int k = lewo;	// <-- indeks dla g³ównej tablicy

	std::vector<int> lewatab(t1);	// <-- Tworzenie tymczasowej tablicy która zawiera elementy lewa do œrodka 
	std::vector<int> prawatab(t2);	// <-- Tworzenie tymczasowej tablicy która zawiera elemetny od œrodka do prawa 

	for (int i = 0; i < t1; i++)			// <-- Kopiujemy dane do tymczasowej lewej tablicy
		lewatab[i] = tab[lewo + i];
	for (int i = 0; i < t2; i++)			// <-- Kopiujemy dane do tymczasowej prawej tablicy
		prawatab[i] = tab[srodek + 1 + i];

	while (i < t1 && j < t2) {				// <-- Pêtla porównujemy elementy z obu tablic i umieszcza mniejsze elementy do g³ównej tablicy
		if (lewatab[i] <= prawatab[j]) {	// <-- Jeœli elementy z lewej tab s¹ mniejsze lub równe ni¿ te z prawej tab wstawiamy 
			tab[k] = lewatab[i];			//     element z lewej tablicy do g³ównej tablicy
			i++;
		}
		else {								// <-- Jeœli elementy z prawej tablicy s¹ mniejsze, wstawiamy element z prawej tablicy 
			tab[k] = prawatab[j];
			j++;
		}
		k++;
	}

	while (i < t1) {			
		tab[k] = lewatab[i];	// <-- Kopiowanie pozosta³ych elementów z lewej tablicy 
		i++;
		k++;
	}

	while (j < t2) {
		tab[k] = prawatab[j];	// <-- Kopiowanie pozosta³ych elementów z prawej tablicy 
		j++;
		k++;
	}
}

void MergeSort::Scalanie_Sortowanie(std::vector<int>& tab) {   // <-- Funkcja jest odpowiedzialna za wywo³anie g³ównego procesu sortowania przez scalanie
	if (!tab.empty()) {										   // <-- Sprawdzamy czy tablica nie jest pusta
		Scalanie_Dzielenie(tab, 0, tab.size() - 1);			   // <-- Jeœli zawiera elementy, wywo³ujemy funkcje która dzieli tablice na mniejsze czêœci,
	}														   //     a¿ do momentu osi¹gniêcia wartoœci pojedycznych 
}

