#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;

    cout << "Ingrese 15 numeros:" << endl;
    for (int i = 0; i < 15; i++) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.rbegin(), numeros.rend());

    cout << "Vector ordenado de mayor a menor:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado de menor a mayor:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
