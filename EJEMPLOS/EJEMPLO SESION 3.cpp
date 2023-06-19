#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){
	
	char nombre[20];
	
	cout << "Ingrese el nombre de la persona: " << endl;
	
	cin.getline(nombre, 20, '\n'); // Ingresar datos como string, necesita 3 parametros
	
	cout << nombre << endl;
	
	int distancia = strlen(nombre); // Para determinar la cantidad de espacios
	
	cout << "Cantidad de espacios: " << distancia;
	
	return 0;
}
