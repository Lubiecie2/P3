#include <iostream>
#include <vector>
#include "Scalanie.h"

int main()
{
    MergeSort sortowanie;

    std::cout << "Sortowanie Tablicy: " << std::endl;
    std::cout << std::endl;

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
}

