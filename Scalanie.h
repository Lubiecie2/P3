#pragma once
#include <gtest/gtest.h>
#include <vector>

/// Klasa implementujaca algorytm sortowania przez scalanie (MergeSort)
/// @brief Klasa implementuje algorytm sortowania przez scalanie (MergeSort) dla wektora liczb calkowitych.
class MergeSort {

public:
    /// Funkcja glowna do sortowania wektora za pomoca algorytmu MergeSort.
    /// @param tab Wektor liczb calkowitych, ktory ma zostac posortowany.
    /// @brief Sortuje przekazany wektor w porzadku rosnacym.
    void Scalanie_Sortowanie(std::vector<int>& tab);

    /// Funkcja pomocnicza dzielaca wektor na dwie czesci w celu ich rekurencyjnego posortowania.
    /// @param tab Wektor liczb calkowitych, ktory ma zostac podzielony.
    /// @param lewo Indeks poczatkowy (lewy).
    /// @param prawo Indeks koncowy (prawy).
    /// @brief Dzieli wektor na dwie czesci i wywoluje rekurencyjnie sortowanie dla obu czesci.
    void Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo);

    /// Funkcja laczaca posortowane czesci wektora w jedna calosc.
    /// @param tab Wektor liczb calkowitych, ktory ma zostac scalony.
    /// @param lewo Indeks poczatkowy (lewy).
    /// @param srodek Indeks srodkowy.
    /// @param prawo Indeks koncowy (prawy).
    /// @brief Scalanie dwoch posortowanych czesci wektora w jeden posortowany fragment.
    void Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo);
};
