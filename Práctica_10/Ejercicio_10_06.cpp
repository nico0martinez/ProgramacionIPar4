// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 6

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

vector<string> generarNombresCompletos(const vector<string> &Nombres,
                                       const vector<string> &Apellidos, int n){
    vector<string> completos;
    for (int i = 0; i < n; i++){
        string nombre = Nombres[rand() % Nombres.size()];
        string apellido = Apellidos[rand() % Apellidos.size()];
        completos.push_back(nombre + " " + apellido);
    }
    return completos;
}

void ordenarAlfabeticamente(vector<string> &lista){
    int n = lista.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1 - i; j++){
            if (lista[j] > lista[j + 1]){
                string aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}

void mostrarLista(const string &titulo, const vector<string> &lista){
    cout << titulo << endl;
    for (size_t i = 0; i < lista.size(); i++)
        cout << i + 1 << ". " << lista[i] << endl;
}

int main(){
    srand(time(nullptr));
    int n;
    cout << "Numero de estudiantes (N): ";
    cin >> n;
    if (n <= 0){
        cout << "N debe ser mayor que 0" << endl;
        return 1;
    }

    vector<string> estudiantes = generarNombresCompletos(cargarNombres(), cargarApellidos(), n);
    mostrarLista("--- Lista original ---", estudiantes);

    ordenarAlfabeticamente(estudiantes);
    cout << endl;
    mostrarLista("--- Lista de asistencia (A-Z) ---", estudiantes);
    return 0;
}
