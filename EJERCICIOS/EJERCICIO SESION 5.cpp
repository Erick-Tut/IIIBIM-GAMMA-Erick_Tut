#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {

    char nombre[35];
    int seleccion;
    int cursos, notas[100], e, i;
    float promedio;
    bool nombreIngresado = false;
    bool notasIngresadas = false;

    do {
        cout << "MENU" << endl;
        cout << "(1) Ingresar el nombre y apellido del estudiante" << endl;
        cout << "(2) Las notas de los cursos asignados por el docente" << endl;
        cout << "(3) Visualizacion de las notas individuales" << endl;
        cout << "(4) Promedio general de las notas" << endl;
        cout << "(5) Salir" << endl;

        cin >> seleccion;

        switch (seleccion) {
            case 1:
                cout << "Ingrese el nombre y apellido del estudiante: " << endl;
                cin.ignore();
                cin.getline(nombre, 35);
                nombreIngresado = true;
                break;

            case 2:
                if (!nombreIngresado) {
                    cout << "No has ingresado el nombre del estudiante." << endl;
                    break;
                }
                
                cout << "Ingrese cuantos cursos quiere agregar: ";
                cin >> cursos;

                for (i = 0; i < cursos; i++) {
                    cout << "Curso " << i + 1 << ": ";
                    cin >> notas[i];
                }
                notasIngresadas = true;
                break;

            case 3:
                if (!notasIngresadas) {
                    cout << "No has ingresado las notas de los cursos." << endl;
                    break;
                }
                
                cout << "Visualiza las notas individuales." << endl;
                
                for (int j = 0; j < cursos; j++) {
                    cout << "Curso " << j + 1 << ": " << notas[j] << endl;
                }
                break;

            case 4:
                if (!nombreIngresado && !notasIngresadas) {
                    cout << "No has ingresado el nombre del estudiante ni las notas de los cursos." << endl;
                    break;
                } else if (!nombreIngresado) {
                    cout << "No has ingresado el nombre del estudiante." << endl;
                    break;
                } else if (!notasIngresadas) {
                    cout << "No has ingresado las notas de los cursos." << endl;
                    break;
                }

                cout << "Visualiza el promedio general de las notas." << endl;
                promedio = 0;

                for (int j = 0; j < cursos; j++) {
                    promedio += notas[j];
                }

                promedio /= cursos;
                cout << "Alumno: " << nombre << endl;
                cout << "Promedio: " << fixed << promedio << endl;
                break;

            default:
                cout << "Feliz dia!" << endl;
                break;
        }
    } while (seleccion != 5);

    return 0;
}
