// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

vector<float> generarTiempos(int n){
    vector<float> tiempos;
    for (int i = 0; i < n; i++){
        float t = 10.0f + (rand() / (float)RAND_MAX) * 10.0f;
        tiempos.push_back(round(t * 100.0f) / 100.0f);
    }
    return tiempos;
}

void ordenarInsercion(vector<float> &v){
    for (size_t i = 1; i < v.size(); i++){
        float clave = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > clave){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = clave;
    }
}

void imprimirTiempos(const string &titulo, const vector<float> &v){
    cout << titulo << endl;
    cout << fixed << setprecision(2);
    for (size_t i = 0; i < v.size(); i++)
        cout << "Corredor " << setw(2) << i + 1 << ": " << v[i] << " seg" << endl;
}

int main(){
    srand(time(nullptr));
    int n;
    cout << "Numero de corredores: ";
    cin >> n;
    if (n <= 0) {
        cout << "N debe ser mayor que 0" << endl;
        return 1;
    }

    vector<float> tiempos = generarTiempos(n);
    imprimirTiempos("--- Antes de ordenar ---", tiempos);

    ordenarInsercion(tiempos);
    cout << endl;
    imprimirTiempos("--- Despues de ordenar (menor a mayor) ---", tiempos);
    return 0;
}
