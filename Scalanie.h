#pragma once
#include <gtest/gtest.h>
#include <vector>

/// Klasa implementuj¹ca algorytm sortowania przez scalanie (MergeSort)
/// @brief Klasa implementuje algorytm sortowania przez scalanie (MergeSort) dla wektora liczb ca³kowitych.
class MergeSort {

public:
    /// Funkcja g³ówna do sortowania wektora za pomoc¹ algorytmu MergeSort.
    /// @param tab Wektor liczb ca³kowitych, który ma zostaæ posortowany.
    /// @brief Sortuje przekazany wektor w porz¹dku rosn¹cym.
    void Scalanie_Sortowanie(std::vector<int>& tab);

    /// Funkcja pomocnicza dziel¹ca wektor na dwie czêœci w celu ich rekurencyjnego posortowania.
    /// @param tab Wektor liczb ca³kowitych, który ma zostaæ podzielony.
    /// @param lewo Indeks pocz¹tkowy (lewy).
    /// @param prawo Indeks koñcowy (prawy).
    /// @brief Dzieli wektor na dwie czêœci i wywo³uje rekurencyjnie sortowanie dla obu czêœci.
    void Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo);

    /// Funkcja ³¹cz¹ca posortowane czêœci wektora w jedn¹ ca³oœæ.
    /// @param tab Wektor liczb ca³kowitych, który ma zostaæ scalony.
    /// @param lewo Indeks pocz¹tkowy (lewy).
    /// @param srodek Indeks œrodkowy.
    /// @param prawo Indeks koñcowy (prawy).
    /// @brief Scalanie dwóch posortowanych czêœci wektora w jeden posortowany fragment.
    void Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo);
};