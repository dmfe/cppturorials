#include "Sorts.hpp"

void insertion_sort(int* a, int n) {
    int x;
    for (int i = 1; i < n; i++) {
        x = a[i];
        int j = i - 1;
        while (j >= 0 && x < a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

void bubble_sort(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool changed = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                a[j] += a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] -= a[j + 1];
                changed = true;
            }
        }
        if (!changed) {
            break;
        }
    }
}

void selection_sort(int* a, int n) {
    int k;
    int x;
    for (int i = 0; i < n; i++) {
        k = i;
        x = a[i];
        for (int j = i + 1; j < n; j++) {
            if (a[j] < x) {
                k = j;
                x = a[j];
            }
        }
        a[k] = a[i];
        a[i] = x;
    }
}

