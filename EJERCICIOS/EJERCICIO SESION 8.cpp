#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    int edades[size];

    cout << "Ingresa las 10 edades: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> edades[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (edades[j] > edades[j + 1]) {
                int aux = edades[j];
                edades[j] = edades[j + 1];
                edades[j + 1] = aux;
            }
        }
    }

    cout << "Edades ordenadas en forma ascendente:" << endl;
    for (int i = 0; i < size; i++) {
        cout << edades[i] << " ";
    }
    cout << endl;

    return 0;
}
