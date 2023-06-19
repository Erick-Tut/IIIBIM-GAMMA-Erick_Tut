#include <iostream>

using namespace std;

int main() {
    int fila = 3;
    int columna = 3;

    int matriz_a[fila][columna];
    int matriz_b[fila][columna];

    cout << "MATRIZ 1" << endl;

    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << "Ingrese los datos en " << i << "," << x << ": ";
            cin >> matriz_a[i][x];
        }
    }

    cout << "MATRIZ 2" << endl;

    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << "Ingrese los datos en " << i << "," << x << ": ";
            cin >> matriz_b[i][x];
        }
    }

    cout << "Suma de las matrices:" << endl;

    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << matriz_a[i][x] + matriz_b[i][x] << " ";
        }
        cout << endl;
    }

    return 0;
}
