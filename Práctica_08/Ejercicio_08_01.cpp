// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<string> cargarNombres(){
    return {"Juan", "Maria", "Carlos", "Ana", "Luis", "Sofia", "Pedro", "Lucia", "Diego", "Valeria"};
}

vector<string> cargarApellidos(){
    return {"Perez", "Gonzalez", "Rodriguez", "Mamani", "Quispe", "Flores", "Vargas", "Rojas", "Choque", "Mendoza"};
}

vector<int> cargarEdades(){
    return {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
}

void mostrarPersonaAleatoria(const vector<string> &nombres,
                             const vector<string> &apellidos,
                             const vector<int> &edades){
    string nombre = nombres[rand() % nombres.size()];
    string apellido = apellidos[rand() % apellidos.size()];
    int edad = edades[rand() % edades.size()];
    cout << nombre << " " << apellido << ", " << edad << " anos\n";
}

int main(){
    srand(time(nullptr));
    vector<string> nombres = cargarNombres();
    vector<string> apellidos = cargarApellidos();
    vector<int> edades = cargarEdades();

    int n;
    cout << "Cuantas personas quiere generar? ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << i + 1 << ". ";
        mostrarPersonaAleatoria(nombres, apellidos, edades);
    }
    return 0;
}
