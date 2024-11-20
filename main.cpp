#include <iostream>
#include <vector>
#include "Scalanie.h"
#include <gtest/gtest.h>

int main()
{
    std::cout << "Przykladowe sortowania tablic: " << std::endl;
    std::cout << std::endl;
    MergeSort sortowanie;

    std::cout << "Sortowanie tablicy w odwrotnej kolejnosci: ";
    std::cout << std::endl;

    std::vector<int> tab = { 8, 7, 6, 5, 4, 3, 2, 1 };
 
    std::cout << "Przed sortowaniem: ";
    for (int i : tab) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    sortowanie.Scalanie_Sortowanie(tab);

    std::cout << "Po sortowaniu: ";
    for (int i : tab) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Sortowanie tablicy w losowej kolejnosci: ";
    std::cout << std::endl;

    std::vector<int> tab1 = { 4, 2, 1, 8, 6, 3, 9, 5, 7};

    std::cout << "Przed sortowaniem: ";
    for (int i : tab1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    sortowanie.Scalanie_Sortowanie(tab1);

    std::cout << "Po sortowaniu: ";
    for (int i : tab1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "Sortowanie tablicy w z liczbami dodatnimi i ujemnymi: ";
    std::cout << std::endl;

    std::vector<int> tab2 = { -4, 2, -1, 8, -6, 3, -9, -5, 7 };

    std::cout << "Przed sortowaniem: ";
    for (int i : tab2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    sortowanie.Scalanie_Sortowanie(tab2);

    std::cout << "Po sortowaniu: ";
    for (int i : tab2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

