#pragma once
#include <gtest/gtest.h>
#include <vector>

/// Klasa implementuj�ca algorytm sortowania przez scalanie (MergeSort)
/// @brief Klasa implementuje algorytm sortowania przez scalanie (MergeSort) dla wektora liczb ca�kowitych.
class MergeSort {

public:
    /// Funkcja g��wna do sortowania wektora za pomoc� algorytmu MergeSort.
    /// @param tab Wektor liczb ca�kowitych, kt�ry ma zosta� posortowany.
    /// @brief Sortuje przekazany wektor w porz�dku rosn�cym.
    void Scalanie_Sortowanie(std::vector<int>& tab);

    /// Funkcja pomocnicza dziel�ca wektor na dwie cz�ci w celu ich rekurencyjnego posortowania.
    /// @param tab Wektor liczb ca�kowitych, kt�ry ma zosta� podzielony.
    /// @param lewo Indeks pocz�tkowy (lewy).
    /// @param prawo Indeks ko�cowy (prawy).
    /// @brief Dzieli wektor na dwie cz�ci i wywo�uje rekurencyjnie sortowanie dla obu cz�ci.
    void Scalanie_Dzielenie(std::vector<int>& tab, int lewo, int prawo);

    /// Funkcja ��cz�ca posortowane cz�ci wektora w jedn� ca�o��.
    /// @param tab Wektor liczb ca�kowitych, kt�ry ma zosta� scalony.
    /// @param lewo Indeks pocz�tkowy (lewy).
    /// @param srodek Indeks �rodkowy.
    /// @param prawo Indeks ko�cowy (prawy).
    /// @brief Scalanie dw�ch posortowanych cz�ci wektora w jeden posortowany fragment.
    void Scalanie_Scalanie(std::vector<int>& tab, int lewo, int srodek, int prawo);
};