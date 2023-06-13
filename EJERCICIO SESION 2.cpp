#include <iostream>

using namespace std;

int main(){
	
	int fila = 4;
	
	int columna = 4;
	
	int matriz_a[fila][columna];
	int filas[fila];
	int columnas[columna];
	int suma = 0;
	
	cout << "MATRIZ 1" <<endl;
	
	for(int i = 0; i < fila; i++){
	for(int x = 0; x < columna; x++){
			
		cout << "Ingrese los datos en " << i << "," << x <<endl;
		
		cin >> matriz_a[i][x];
		
		}
	}
		
	for(int i = 0; i < fila; i++){
		
	for(int x = 0; x < columna; x++){
		
		suma += matriz_a[i][x];
		
		}
	 filas[fila]=suma;
	}
	
		for(int i = 0; i < fila; i++){
		
	for(int x = 0; x < columna; x++){
		
		suma += matriz_a[i][x];
		
		}
	 columnas[columna]=suma;
	}
		
	cout << "RESULTADOS: " << endl;
		
	for(int i=0; i< fila; i++){	
   
   cout<< "filas " << i + 1 << ": " << filas[i] << endl;
   	
   cout << " " << endl;
}	
		
	for(int x=0; x< columna; x++){	
   
   cout<< "columnas " << x + 1 << ": " << columnas[x] << endl;
   	
   cout << " " << endl;
}	
	return 0;
}
