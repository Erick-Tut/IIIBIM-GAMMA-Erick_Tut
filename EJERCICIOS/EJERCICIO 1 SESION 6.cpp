#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool Palindromo(const string& str) {
    string invertida = str;
    reverse(invertida.begin(), invertida.end());
    return str == invertida;
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    if (Palindromo(cadena)) {
        cout << "La cadena de texto es un palindromo." << endl;
    } else {
        cout << "La cadena de texto no es un palindromo." << endl;
    }

    return 0;
}
