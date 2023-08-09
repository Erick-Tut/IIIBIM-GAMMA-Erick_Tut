#include <iostream>
#include <algorithm> // Libreria para funciones matematicas
#include <vector>
#include <conio.h>

using namespace std;

// Función para mostrar un conjunto
template <typename T>
void mostrarConjunto(const vector<T>& conjunto) {
    for (typename vector<T>::const_iterator it = conjunto.begin(); it != conjunto.end(); ++it) {
        cout << *it << " "; // Mostrar cada elemento del conjunto
    }
    cout << endl;
}

// Función para calcular el factorial
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Calculo del factorial
    }
    return result;
}

// Función para calcular las permutaciones con repeticion
int permutacionesConRepeticion(int n, int r) {
    int resultado = 1;
    for (int i = 0; i < r; i++) {
        resultado *= n; // Calculo de permutaciones con repeticion
        n--; // Decremento de n en cada iteración
    }
    return resultado;
}

// Función para calcular las permutaciones en subconjuntos divididos
int permutacionesSubconjuntosDivididos(const vector<int>& subconjuntos) {
    int n = 0;
    int denominador = 1;
    for (vector<int>::const_iterator it = subconjuntos.begin(); it != subconjuntos.end(); ++it) {
        n += *it; // Suma de tamaños de subconjuntos
        denominador *= factorial(*it); // Calculo del factorial del tamaño de cada subconjunto
    }
    return factorial(n) / denominador; // Calculo de permutaciones en subconjuntos divididos
}

// Función para calcular las permutaciones circulares
int permutacionesCirculares(int n) {
    return factorial(n - 1); // Calculo de permutaciones circulares
}

// Función para calcular las combinaciones sin repetición
int combinacionesSinRepeticion(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r)); // Calculo de combinaciones sin repetición
}

// Función para calcular las combinaciones con repetición
int combinacionesConRepeticion(int n, int r) {
    return factorial(n + r - 1) / (factorial(r) * factorial(n - 1)); // Calculo de combinaciones con repetición
}

int main() {
    int option;
    int subOptionPermutaciones;
    int n, r;
    int resultado;
    vector<int> elementos;

    do {
        cout << "Menu Principal:" << endl;
        cout << "1) Permutaciones" << endl;
        cout << "2) Combinaciones" << endl;
        cout << "3) Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "SubMenu Permutaciones:" << endl;
                cout << "1) Permutaciones sin repeticion" << endl;
                cout << "2) Permutaciones con repeticion" << endl;
                cout << "3) Permutaciones en subconjuntos divididos" << endl;
                cout << "4) Permutaciones circulares" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subOptionPermutaciones;

                switch (subOptionPermutaciones) {
                    case 1:
                        cout << "Permutaciones sin repeticion:" << endl;
                        cout << "Ingrese el valor de n: ";
                        cin >> n;
                        elementos.clear();
                        for (int i = 1; i <= n; i++) {
                            elementos.push_back(i);
                        }
                        mostrarConjunto(elementos);
                        cout << "Resultado: " << factorial(n) << endl;
                        break;

                    case 2:
                        cout << "Permutaciones con repeticion:" << endl;
                        cout << "Ingrese el valor de n: ";
                        cin >> n;
                        cout << "Ingrese el valor de r: ";
                        cin >> r;
                        resultado = permutacionesConRepeticion(n, r);
                        cout << "Resultado: " << resultado << endl;
                        break;

                    case 3:
                        cout << "Permutaciones en subconjuntos divididos:" << endl;
                        cout << "Ingrese el numero de subconjuntos: ";
                        int numSubconjuntos;
                        cin >> numSubconjuntos;
                        elementos.clear();
                        for (int i = 0; i < numSubconjuntos; i++) {
                            int subconjuntoSize;
                            cout << "Ingrese el tamaño del subconjunto " << i + 1 << ": ";
                            cin >> subconjuntoSize;
                            elementos.push_back(subconjuntoSize);
                        }
                        cout << "Resultado: " << permutacionesSubconjuntosDivididos(elementos) << endl;
                        break;

                    case 4:
                        cout << "Ingrese el valor de n: ";
                        cin >> n;
                        cout << "Permutaciones circulares: " << permutacionesCirculares(n) << endl;
                        break;

                    default:
                        cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
                }
                break;

            case 2:
                int subOptionCombinaciones;
                cout << "SubMenu Combinaciones:" << endl;
                cout << "1) Combinaciones sin repeticion" << endl;
                cout << "2) Combinaciones con repeticion" << endl;
                cout << "Seleccione una opcion: ";
                cin >> subOptionCombinaciones;

                switch (subOptionCombinaciones) {
                    case 1:
                        cout << "Combinaciones sin repeticion:" << endl;
                        cout << "Ingrese el valor de n: ";
                        cin >> n;
                        cout << "Ingrese el valor de r: ";
                        cin >> r;
                        cout << "Resultado: " << combinacionesSinRepeticion(n, r) << endl;
                        break;

                    case 2:
                        cout << "Combinaciones con repeticion:" << endl;
                        cout << "Ingrese el valor de n: ";
                        cin >> n;
                        cout << "Ingrese el valor de r: ";
                        cin >> r;
                        cout << "Resultado: " << combinacionesConRepeticion(n, r) << endl;
                        break;

                    default:
                        cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                        break;
                }
                break;

            case 3:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
                break;
        }

    } while (option != 3);

    return 0;
}
