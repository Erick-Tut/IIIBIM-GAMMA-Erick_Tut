#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
    char nombre[35];

    cout << "Ingrese una frase (maximo 35 caracteres):" << endl;
    
    cout << endl;
    
    cin.getline(nombre, 35, '\n');

    int longitud = strlen(nombre);
    
    int Vocales = 0;
    
    cout << endl;

    for (int i = 0; i < longitud; i++) {
    	
        char caracter = tolower(nombre[i]);

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            Vocales++;
        }
    }

    cout << "Cantidad total de vocales utilizadas: " << Vocales << endl;
    
    cout << endl;
    int VocalA = 0, VocalE = 0, VocalI = 0, VocalO = 0, VocalU = 0;

    for (int y = 0; y < longitud; y++) {
    	
        char vocal = tolower(nombre[y]);

        switch (vocal) {
            case 'a':
                VocalA++;
                break;
            case 'e':
                VocalE++;
                break;
            case 'i':
                VocalI++;
                break;
            case 'o':
                VocalO++;
                break;
            case 'u':
                VocalU++;
                break;
            default:
                break;
        }
    }

    cout << "Cantidad de 'a': " << VocalA << endl;
    cout << "Cantidad de 'e': " << VocalE << endl;
    cout << "Cantidad de 'i': " << VocalI << endl;
    cout << "Cantidad de 'o': " << VocalO << endl;
    cout << "Cantidad de 'u': " << VocalU << endl;

    return 0;
}
