#include <iostream>
#include <conio.h> //Eliminar palabras

using namespace std;

int main(){ 

 int numeros[5];
 int suma;
 
 cout << "Ingrese cinco numeros: " << endl;
 
 // Para registrar los elementos en el vector
 
 for(int i = 0; i < 5; i++){
 	
 	cin >> numeros[i];
 	
 	suma += numeros[i];
 	
 }
 
  // Vector Original
  
  cout << "El vector original es: ";
  
 for(int i = 0; i < 5; i++){
 	
 	cout << numeros[i] << " " << endl;
 	
 }
 
 // Para imprimir los valores
 
 for(int j = 0; j < 1; j++){
 	
 	cout << "La suma de todos los datos es: " << suma << endl;
 	
 }
getch();

return 0;

}
