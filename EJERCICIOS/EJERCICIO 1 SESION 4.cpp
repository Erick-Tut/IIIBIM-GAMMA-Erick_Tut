#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char nombre[100];
	
	cout << "Ingrese una frase: " << endl;
	
	cout << " " << endl;
		
	cin.getline(nombre, 100, '\n');
	
	cout << " " << endl;
		
	cout << "Frase inversa: " << endl;
	
	cout << " " << endl;	
	
    int longitud = strlen(nombre);
    
    cout << " " << endl;	
    
    for (int i = longitud - 1; i >= 0; i--) {	 // Resta la longitud haciendo que imprima la frase en inversa
    	
     cout << nombre[i];
        
    }
		
	return 0;
}
