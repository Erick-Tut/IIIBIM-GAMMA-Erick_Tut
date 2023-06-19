#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){

	int numero;    
	
	cout << "Ingrese cuantos nombres quiere utilizar: " << endl;
	
	cin >> numero;
	
	char nombre[numero][20];
	
	cout << "Ingrese nombres: " << endl;
	
 for(int i = 0; i<= numero; i++){
	
	cin.getline(nombre[i], 20, '\n'); 
	
 }
 
 for(int i = 1; i<= numero; i++){
 	
	int distancia = strlen(nombre[i]);
	
	cout << nombre[i] << " Tiene esta cantidad de espacios: " << distancia << endl;
 }

	return 0;
}
