// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

const int ALUMNOS = 5;
const int NOTAS = 3;

typedef vector<vector<int>> Matriz;

vector<string> cargarNombres(){
    return {"Marcelo", "Ana", "Zoe", "Diego", "Beatriz"};
}

Matriz generarNotas(){
    Matriz notas(ALUMNOS, vector<int>(NOTAS));
    for (int i = 0; i < ALUMNOS; i++)
        for (int j = 0; j < NOTAS; j++)
            notas[i][j] = rand() % 101;
    return notas;
}

vector<float> calcularPromedios(const Matriz &notas){
    vector<float> promedios(notas.size());
    for (size_t i = 0; i < notas.size(); i++) {
        int suma = 0;
        for (int nota : notas[i]) suma += nota;
        promedios[i] = (float)suma / NOTAS;
    }
    return promedios;
}

void ordenarAlumnos(vector<string> &nombres, Matriz &notas, vector<float> &promedios){
    int n = nombres.size();
    for (int i = 0; i < n - 1; i++){
        int posMenor = i;
        for (int j = i + 1; j < n; j++)
            if (nombres[j] < nombres[posMenor]) posMenor = j;

        if (posMenor != i){
            swap(nombres[i], nombres[posMenor]);
            swap(notas[i], notas[posMenor]);          
            swap(promedios[i], promedios[posMenor]);
        }
    }
}

void imprimirBoletin(const vector<string> &nombres, const Matriz &notas,
                     const vector<float> &promedios){
    cout << left << setw(10) << "Nombre" << "| "
         << setw(7) << "Nota 1" << "| "
         << setw(7) << "Nota 2" << "| "
         << setw(7) << "Nota 3" << "| "
         << "Promedio" << endl;
    cout << string(48, '-') << endl;

    for (int i = 0; i < ALUMNOS; i++){
        cout << left << setw(10) << nombres[i] << "| ";
        for (int j = 0; j < NOTAS; j++)
            cout << setw(7) << notas[i][j] << "| ";
        cout << fixed << setprecision(2) << promedios[i] << endl;
    }
}

int main(){
    srand(time(nullptr));

    vector<string> nombres = cargarNombres();
    Matriz notas = generarNotas();
    vector<float> promedios = calcularPromedios(notas);

    cout << "=== BOLETIN SIN ORDENAR ===" << endl;
    imprimirBoletin(nombres, notas, promedios);

    ordenarAlumnos(nombres, notas, promedios);

    cout << endl << "=== BOLETIN ORDENADO ALFABETICAMENTE ===" << endl;
    imprimirBoletin(nombres, notas, promedios);
    return 0;
}
