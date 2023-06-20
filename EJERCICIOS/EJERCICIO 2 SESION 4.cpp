#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){ 

char nombre[35];
	
	cout << "Ingrese una frase Max: 35 Caracteristicas >> " << endl;
	
	cout << " " << endl;
		
	cin.getline(nombre, 35, '\n');
	
	cout << " " << endl;
		
	cout << "Vocales utilizadas: " << endl;
	
	cout << " " << endl;
	
	int longitud = strlen(nombre);
	
    int Vocales = 0;

    for (int i = 0; i < longitud; i++) {
    	
        char caracter = tolower(nombre[i]); // Suma todos los datos

        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') { // Busca todas las vocales y las cuenta
            Vocales++;
        }
    }

    cout << "Cantidad de vocales utilizadas: " << Vocales << endl;  

return 0;

}
