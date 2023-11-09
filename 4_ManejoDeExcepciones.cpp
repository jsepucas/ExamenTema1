#include <iostream>
using namespace std;

int divide(int x, int y) {
    if (y == 0) {
        throw "No es posible realizar una división por 0";
    }
    return x / y;
}