#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
#include "gtest/gtest.h"
#include "C:\Users\kgruc\OneDrive\Pulpit\ProjektZ3\main\main\Scalanie.h"
#include "C:\Users\kgruc\OneDrive\Pulpit\ProjektZ3\main\main\Scalanie.cpp"

/// @brief Test sortowania przez scalanie dla tablicy juz posortowanej.
TEST(Test_sortowanie_przez_scalanie, Tablica_posortowana) {
    MergeSort Scalanie;
    std::vector<int> vec = { 1, 2, 3, 4, 5, 6 };
    std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy w odwrotnej kolejnosci.
TEST(Test_sortowanie_przez_scalanie, Tablica_w_odwrotnej_kolejnoœci) {
    MergeSort Scalanie;
    std::vector<int> vec = { 6, 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z losowymi wartosciami.
TEST(Test_sortowanie_przez_scalanie, Tablica_losowa) {
    MergeSort Scalanie;
    std::vector<int> vec = { 7, 2, 4, 6, 1, 8 };
    std::vector<int> expected = { 1, 2, 4, 6, 7, 8 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z liczbami ujemnymi.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_liczbami_ujemnymi) {
    MergeSort Scalanie;
    std::vector<int> vec = { -2 , -5, -8, -3, -1, -4 };
    std::vector<int> expected = { -8, -5, -4, -3, -2, -1 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z liczbami dodatnimi i ujemnymi.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_liczbami_ujemnymi_dodatnimi) {
    MergeSort Scalanie;
    std::vector<int> vec = { -4, 2, -6, 3, -5, 6 };
    std::vector<int> expected = { -6, -5, -4, 2, 3, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla pustej tablicy.
TEST(Test_sortowanie_przez_scalanie, Tablica_pusta) {
    MergeSort Scalanie;
    std::vector<int> vec = {};
    std::vector<int> expected = {};
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z jednym elementem.
TEST(Test_sortowanie_przez_scalanie, Tablica_jeden_element) {
    MergeSort Scalanie;
    std::vector<int> vec = { 3 };
    std::vector<int> expected = { 3 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z duplikatami.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_duplikatami) {
    MergeSort Scalanie;
    std::vector<int> vec = { 4, 2, 4, 6, 4, 8 };
    std::vector<int> expected = { 2, 4, 4, 4, 6, 8 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z ujemnymi duplikatami.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_ujemnymi_duplikatami) {
    MergeSort Scalanie;
    std::vector<int> vec = { -2, -4, -2, -6, -4, -8 };
    std::vector<int> expected = { -8, -6, -4, -4, -2, -2 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z duplikatami dodatnimi i ujemnymi.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_duplikatami_dodatnimi_ujemnymi) {
    MergeSort Scalanie;
    std::vector<int> vec = { -2, 4, -2, 6, -4, 4, -6, -8 };
    std::vector<int> expected = { -8, -6, -4, -2, -2, 4, 4, 6 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z dwoma elementami posortowanymi rosnaco.
TEST(Test_sortowanie_przez_scalanie, Tablica_dwa_elementy_rosnaco) {
    MergeSort Scalanie;
    std::vector<int> vec = { 1, 2 };
    std::vector<int> expected = { 1, 2 };
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z ponad 100 elementami w odwrotnej kolejnosci.
TEST(Test_sortowanie_przez_scalanie, Tablica_ponad_100_element) {
    MergeSort Scalanie;

    std::vector<int> vec(150);
    for (int i = 0; i < 150; ++i) {
        vec[i] = 150 - i;
    }

    std::vector<int> expected(150);
    for (int i = 0; i < 150; ++i) {
        expected[i] = i + 1;
    }
    Scalanie.Scalanie_Sortowanie(vec);
    ASSERT_EQ(vec, expected);
}

/// @brief Test sortowania przez scalanie dla tablicy z ponad 100 roznymi elementami.
TEST(Test_sortowanie_przez_scalanie, Tablica_z_ponad_100_ró¿nymi_elementami) {
    MergeSort sortowanie;
    std::vector<int> tab;

    for (int i = -50; i <= 50; ++i) {
        tab.push_back(i);
    }
    tab.push_back(24);

    std::vector<int> expected;

    for (int i = -50; i <= 50; ++i) {
        expected.push_back(i);
    }

    expected.push_back(24);

    sortowanie.Scalanie_Sortowanie(tab);

    std::sort(expected.begin(), expected.end());

    EXPECT_EQ(tab, expected);
}
