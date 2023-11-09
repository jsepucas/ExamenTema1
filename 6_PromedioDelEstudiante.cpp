#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notas; = {7, 7 , 9 , 10, 8};

    cout << "Mis notas:";
    for (int calificacion : notas) {
        cout << " " << calificacion;
    }
    cout << endl;
}