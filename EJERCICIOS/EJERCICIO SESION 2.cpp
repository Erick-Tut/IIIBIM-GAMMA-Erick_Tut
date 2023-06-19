#include <iostream>

using namespace std;

int main() {
    int fila = 4;
    int columna = 4;

    int matriz_a[fila][columna];
    int filas[fila];
    int columnas[columna]
	;

    cout << "MATRIZ 1" << endl;

    for (int i = 0; i < fila; i++) {
        for (int x = 0; x < columna; x++) {
            cout << "Ingrese los datos en " << i << "," << x << ": ";
            cin >> matriz_a[i][x];
        }
    }

    for (int i = 0; i < fila; i++) {
        int suma = 0;
        for (int x = 0; x < columna; x++) {
            suma += matriz_a[i][x];
        }
        filas[i] = suma;
    }

    for (int x = 0; x < columna; x++) {
        int suma = 0;
        for (int i = 0; i < fila; i++) {
            suma += matriz_a[i][x];
        }
        columnas[x] = suma;
    }

    cout << "RESULTADOS: " << endl;

    for (int i = 0; i < fila; i++) {
        cout << "fila " << i + 1 << ": " << filas[i] << endl;
    }

    cout << endl;

    for (int x = 0; x < columna; x++) {
        cout << "columna " << x + 1 << ": " << columnas[x] << endl;
    }

    return 0;
}
