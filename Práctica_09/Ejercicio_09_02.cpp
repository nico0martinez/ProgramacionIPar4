// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 07/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

typedef vector<vector<int>> Matriz;

Matriz generarMatriz(int n, int a, int b){
    Matriz m(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m[i][j] = a + rand() % (b - a + 1);
    return m;
}

void mostrarMatriz(const Matriz &m){
    for (const auto &fila : m) {
        for (int x : fila) cout << x << "\t";
        cout << "\n";
    }
}

int sumaUltimaColumna(const Matriz &m){
    int suma = 0;
    for (const auto &fila : m) suma += fila.back();
    return suma;
}


long double productoUltimaFila(const Matriz &m){
    long double producto = 1;
    for (int x : m.back()) producto *= x;
    return producto;
}

void mayorYPosicion(const Matriz &m, int &mayor, int &fila, int &columna){
    mayor = m[0][0];
    fila = 0;
    columna = 0;
    for (size_t i = 0; i < m.size(); i++)
        for (size_t j = 0; j < m[i].size(); j++)
            if (m[i][j] > mayor) {
                mayor = m[i][j];
                fila = i;
                columna = j;
            }
}

double promedio(const Matriz &m){
    double suma = 0;
    int cantidad = 0;
    for (const auto &fila : m)
        for (int x : fila){
            suma += x;
            cantidad++;
        }
    return suma / cantidad;
}

int main(){
    srand(time(nullptr));
    int n, a, b;
    cout << "Orden de la matriz (N): ";
    cin >> n;
    cout << "Valor minimo (A): ";
    cin >> a;
    cout << "Valor maximo (B): ";
    cin >> b;
    if (n <= 0 || a > b) {
        cout << "Datos invalidos (N > 0 y A <= B)\n";
        return 1;
    }

    Matriz m = generarMatriz(n, a, b);
    cout << "\nMatriz generada:\n";
    mostrarMatriz(m);

    int mayor, fila, columna;
    mayorYPosicion(m, mayor, fila, columna);

    cout << "\nSuma de la ultima columna: " << sumaUltimaColumna(m) << "\n";
    cout << "Producto de la ultima fila: " << fixed << setprecision(0)
         << productoUltimaFila(m) << "\n";
    cout << "Mayor valor: " << mayor << " en la posicion (fila " << fila + 1
         << ", columna " << columna + 1 << ")\n";
    cout << "Promedio: " << fixed << setprecision(2) << promedio(m) << "\n";
    return 0;
}
