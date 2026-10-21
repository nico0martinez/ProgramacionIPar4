// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ordenarLetras(string palabra){
    for (size_t i = 1; i < palabra.length(); i++){
        char clave = palabra[i];
        int j = i - 1;
        while (j >= 0 && tolower((unsigned char)palabra[j]) > tolower((unsigned char)clave)){
            palabra[j + 1] = palabra[j];
            j--;
        }
        palabra[j + 1] = clave;
    }
    return palabra;
}

int main(){
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Letras ordenadas: " << ordenarLetras(palabra) << endl;
    return 0;
}
