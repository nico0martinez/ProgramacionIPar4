// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

vector<double> generarPrecios(int n){
    vector<double> precios;
    for (int i = 0; i < n; i++){
        double p = 1.0 + (rand() / (double)RAND_MAX) * 99.0;
        precios.push_back(round(p * 100.0) / 100.0);
    }
    return precios;
}

void ordenarSeleccion(vector<double> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++){
        int posMenor = i;
        for (int j = i + 1; j < n; j++)
            if (v[j] < v[posMenor]) posMenor = j;
        double aux = v[i];
        v[i] = v[posMenor];
        v[posMenor] = aux;
    }
}

void mostrarPrecios(const string &titulo, const vector<double> &v) {
    cout << titulo << endl;
    cout << fixed << setprecision(2);
    for (double p : v) cout << p << " ";
    cout << endl;
}

void mostrarMasBarato(const vector<double> &ordenado){
    cout << "Precio mas barato: " << ordenado.front() << " Bs" << endl;
}

void mostrarMasCaro(const vector<double> &ordenado){
    cout << "Precio mas caro: " << ordenado.back() << " Bs" << endl;
}

double calcularMediana(const vector<double> &ordenado){
    size_t n = ordenado.size();
    if (n % 2 == 1) return ordenado[n / 2];
    return (ordenado[n / 2 - 1] + ordenado[n / 2]) / 2.0;
}

void mostrarMediana(const vector<double> &ordenado){
    cout << "Mediana de los precios: " << calcularMediana(ordenado) << " Bs" << endl;
}

int main(){
    srand(time(nullptr));
    int n;
    cout << "Numero de productos: ";
    cin >> n;
    if (n <= 0){
        cout << "N debe ser mayor que 0" << endl;
        return 1;
    }

    vector<double> precios = generarPrecios(n);
    mostrarPrecios("Precios originales:", precios);

    ordenarSeleccion(precios);
    mostrarPrecios("Precios ordenados (ascendente):", precios);

    cout << endl;
    mostrarMasBarato(precios);
    mostrarMasCaro(precios);
    mostrarMediana(precios);
    return 0;
}
