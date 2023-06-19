#include <iostream>

using namespace std;

int main (){

	int fila = 3;
	
	int columna = 3;
	
	int matriz[fila][columna];
	
	for(int i = 0; i < fila; i++){
		
		for(int x = 0; x < columna; x++){
			
		cout << "Ingrese los datos en " << i << "," << x <<endl;
		
		cin >> matriz[i][x];
		
		}
	}
		for(int i = 0; i < fila; i++){
		for(int x = 0; x < columna; x++){
			cout << matriz[i][x] << " ";
		}
		cout << endl;
		}
	
	
	return 0;
}

