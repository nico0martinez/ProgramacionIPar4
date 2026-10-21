// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

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

void mostrarNombres(const vector<string> &lista){
    for (size_t i = 0; i < lista.size(); i++)
        cout << i + 1 << ". " << lista[i] << endl;
}

int main(){
    srand(time(nullptr));
    vector<string> Nombres = cargarNombres();
    vector<string> Apellidos = cargarApellidos();

    int n;
    cout << "Cuantos nombres completos desea generar? ";
    cin >> n;

    mostrarNombres(generarNombresCompletos(Nombres, Apellidos, n));
    return 0;
}
