#include <iostream>

void cambiar(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *x = temp;
}