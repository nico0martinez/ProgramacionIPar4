// Materia: Programación I, Paralelo 4
// Autor: ……………………..
// Fecha creación: 24/09/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
using namespace std;

const int TAM = 5;

void leerVector(const string &nombre, int v[]){
    for (int i = 0; i < TAM; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> v[i];
    }
}

void sumarVectores(const int v1[], const int v2[], int v3[]){
    for (int i = 0; i < TAM; i++) v3[i] = v1[i] + v2[i];
}

void mostrarVector(const string &nombre, const int v[]){
    cout << nombre << " = [ ";
    for (int i = 0; i < TAM; i++) cout << v[i] << " ";
    cout << "]\n";
}

int main(){
    int vector1[TAM], vector2[TAM], vector3[TAM];

    leerVector("vector1", vector1);
    leerVector("vector2", vector2);
    sumarVectores(vector1, vector2, vector3);

    cout << "\n";
    mostrarVector("vector1", vector1);
    mostrarVector("vector2", vector2);
    mostrarVector("vector3", vector3);
    return 0;
}
