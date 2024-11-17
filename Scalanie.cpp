#include "Scalanie.h"

void MergeSort::Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo) {  // <-- Funkcja jest odpowiedzialana za rekursywne dzielenie tablicy 

	if (lewo < prawo) {									
		int srodek = lewo + (prawo - lewo) / 2;			// <-- Tablica jest dzielona na dwie cz�ci 
		
		Scalanie_Dzielenie(tab, lewo, srodek);		    // <-- Rekursywnie jest dzielona lewa cz�� tablicy

		Scalanie_Dzielenie(tab, srodek + 1, prawo);		// <-- Rekursywnie jest dzielona prawa cz�� tablicy 

		Scalanie_Scalanie(tab, lewo, srodek, prawo);	// <-- Wywo�ywana jest funkcja kt�ra dzieli dwie posortowane cz�� 
	}
}

void MergeSort::Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo) {
	
	int t1 = srodek - lewo + 1;  // <-- Rozmiar lewej podtablicy
	int t2 = prawo - srodek;	 // <-- Rozmiar prawej podtablicy
	int i = 0;		// <-- indeks dla lewej podtablicy
	int j = 0;		// <-- indeks dla prawej podtablicy
	int k = lewo;	// <-- indeks dla g��wnej tablicy

	std::vector<int> lewatab(t1);	// <-- Tworzenie tymczasowej tablicy kt�ra zawiera elementy lewa do �rodka 
	std::vector<int> prawatab(t2);	// <-- Tworzenie tymczasowej tablicy kt�ra zawiera elemetny od �rodka do prawa 

	for (int i = 0; i < t1; i++)			// <-- Kopiujemy dane do tymczasowej lewej tablicy
		lewatab[i] = tab[lewo + i];
	for (int i = 0; i < t2; i++)			// <-- Kopiujemy dane do tymczasowej prawej tablicy
		prawatab[i] = tab[srodek + 1 + i];

	while (i < t1 && j < t2) {				// <-- P�tla por�wnujemy elementy z obu tablic i umieszcza mniejsze elementy do g��wnej tablicy
		if (lewatab[i] <= prawatab[j]) {	// <-- Je�li elementy z lewej tab s� mniejsze lub r�wne ni� te z prawej tab wstawiamy 
			tab[k] = lewatab[i];			//     element z lewej tablicy do g��wnej tablicy
			i++;
		}
		else {								// <-- Je�li elementy z prawej tablicy s� mniejsze, wstawiamy element z prawej tablicy 
			tab[k] = prawatab[j];
			j++;
		}
		k++;
	}

	while (i < t1) {			
		tab[k] = lewatab[i];	// <-- Kopiowanie pozosta�ych element�w z lewej tablicy 
		i++;
		k++;
	}

	while (j < t2) {
		tab[k] = prawatab[j];	// <-- Kopiowanie pozosta�ych element�w z prawej tablicy 
		j++;
		k++;
	}
}

void MergeSort::Scalanie_Sortowanie(std::vector<int>& tab) {   // <-- Funkcja jest odpowiedzialna za wywo�anie g��wnego procesu sortowania przez scalanie
	if (!tab.empty()) {										   // <-- Sprawdzamy czy tablica nie jest pusta
		Scalanie_Dzielenie(tab, 0, tab.size() - 1);			   // <-- Je�li zawiera elementy, wywo�ujemy funkcje kt�ra dzieli tablice na mniejsze cz�ci,
	}														   //     a� do momentu osi�gni�cia warto�ci pojedycznych 
}

