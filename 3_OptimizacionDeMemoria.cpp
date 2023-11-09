#include <iostream>

void cambiar(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *x = temp;
}

int main() {
    int numero1 = 2;
    int numero2 = 9;

    std::cout << "Valores iniciales: num1 = " << numero1 << ", num2 = " << numero2 << std::endl;

    int* ptr1 = &numero1;
    int* ptr2 = &numero2;

    cambiar(ptr1, ptr2);

    std::cout << "Valores cambiados: num1 = " << numero1 << ", num2 = " << numero2 << std::endl;

    return 0;
}