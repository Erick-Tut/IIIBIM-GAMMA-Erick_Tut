#include <iostream>

using namespace std;

const int filas = 5;
const int columnas = 5;

int main() {
    int matriz[filas][columnas];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int x = 0; x < columnas; x++) {
            cin >> matriz[i][x];
        }
    }

    int maxSuma = 0;
    int maxFila = -1;
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int x = 0; x < columnas; x++) {
            sumaFila += matriz[i][x];
        }
        if (sumaFila > maxSuma) {
            maxSuma = sumaFila;
            maxFila = i;
        }
    }

    cout << "La fila con la maxima suma es la fila " << maxFila + 1
         << " con una suma de " << maxSuma << endl;

    return 0;
}
