// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 07/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriz;


Matriz leerMatriz(int filas, int columnas){
    Matriz m(filas, vector<int>(columnas));
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++){
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> m[i][j];
        }
    return m;
}

void intercambiarPrimeraConUltima(Matriz &m){
    if (m.size() > 1) swap(m.front(), m.back());
}

void mostrarMatriz(const Matriz &m){
    for (const auto &fila : m) {
        for (int x : fila) cout << x << "\t";
        cout << "\n";
    }
}

int main(){
    int filas, columnas;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;
    if (filas <= 0 || columnas <= 0){
        cout << "Dimensiones invalidas\n";
        return 1;
    }

    Matriz m = leerMatriz(filas, columnas);
    cout << "\nMatriz original:\n";
    mostrarMatriz(m);

    intercambiarPrimeraConUltima(m);
    cout << "\nMatriz con la primera y ultima fila intercambiadas:\n";
    mostrarMatriz(m);
    return 0;
}
