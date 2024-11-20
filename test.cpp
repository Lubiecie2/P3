#include "Scalanie.h"

TEST(Test_sortowanie_przez_scalanie, Tablica_posortowana) {
    MergeSort Scalanie; 
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6 };  
    std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
    Scalanie.Scalanie_Sortowanie(vec);    
    ASSERT_EQ(vec, expected);
}
TEST(Test_sortowanie_przez_scalanie, Tablica_w_odwrotnej_kolejnoœci) {
    MergeSort Scalanie;
    std::vector<int> vec = { 6, 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}
TEST(Test_sortowanie_przez_scalanie, Tablica_losowa) {
    MergeSort Scalanie;
    std::vector<int> vec = { 7, 2, 4, 6, 1, 8 };
    std::vector<int> expected = { 1, 2, 4, 6, 7, 8 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}
TEST(Test_sortowanie_przez_scalanie, Tablica_z_liczbami_ujemnymi) {
    MergeSort Scalanie;
    std::vector<int> vec = { -2 , -5, -8, -3, -1, -4 };
    std::vector<int> expected = { -1, -2, -3, -4, -5, -8 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}
TEST(Test_sortowanie_przez_scalanie, Tablica_z_liczbami_ujemne_dodatnie) {
    MergeSort Scalanie;
    std::vector<int> vec = { -4, 2, -6, 3, -5, 6 };
    std::vector<int> expected = { -6, -5, -4, 2, 3, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

