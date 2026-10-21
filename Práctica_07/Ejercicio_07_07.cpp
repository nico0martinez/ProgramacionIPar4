/// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 24/09/2026
// Número de ejercicio: 7

#include <iostream>
using namespace std;

const int MAX = 100;

int llenarVector(int v[]){
    int cantidad = 0;
    int numero;
    while (cantidad < MAX){
        cout << "Numero " << cantidad + 1 << " (negativo para terminar): ";
        cin >> numero;
        if (numero < 0) break;
        v[cantidad] = numero;
        cantidad++;
    }
    return cantidad;
}

void imprimirVector(const int v[], int cantidad){
    cout << "\nElementos introducidos (" << cantidad << "):\n";
    for (int i = 0; i < cantidad; i++) cout << v[i] << " ";
    cout << "\n";
}

int main(){
    int vector[MAX];
    int cantidad = llenarVector(vector);
    imprimirVector(vector, cantidad);
    return 0;
}
