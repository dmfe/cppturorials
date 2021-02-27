#include <iostream>

#include "Sorts.hpp"

void test_sort(char* title, void (*sort_func)(int* arr, int n));

int main() {
    test_sort("Insertion sort:", &insertion_sort);
    test_sort("Bubble sort:", &bubble_sort);
    test_sort("Selection sort:", &selection_sort);
}

void test_sort(char* title, void (*sort_func)(int* arr, int n)) {
    int array[] = {2, 3, 4, 1, 5};
    int array_size = sizeof(array) / sizeof(int);

    std::cout << "Unsorted array:\n";
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    sort_func(array, array_size);

    std::cout << title << std::endl;
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

