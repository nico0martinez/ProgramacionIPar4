// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 14/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> generarPuntuaciones(int n){
    vector<int> puntuaciones;
    for (int i = 0; i < n; i++)
        puntuaciones.push_back(1 + rand() % 100);
    return puntuaciones;
}

void ordenarBurbujaDescendente(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++){
            if (v[j] < v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void mostrarPuntuaciones(const string &titulo, const vector<int> &v){
    cout << titulo << endl;
    for (int x : v) cout << x << " ";
    cout << endl;
}

void mostrarPodio(const vector<int> &ordenado){
    cout << endl << "=== PODIO ===" << endl;
    for (size_t i = 0; i < 3 && i < ordenado.size(); i++)
        cout << i + 1 << " lugar: " << ordenado[i] << " puntos" << endl;
}

int main(){
    srand(time(nullptr));
    int n;
    cout << "Numero de jugadores: ";
    cin >> n;
    if (n <= 0) {
        cout << "N debe ser mayor que 0" << endl;
        return 1;
    }

    vector<int> puntuaciones = generarPuntuaciones(n);
    mostrarPuntuaciones("Puntuaciones originales:", puntuaciones);

    ordenarBurbujaDescendente(puntuaciones);
    mostrarPuntuaciones("Puntuaciones ordenadas (mayor a menor):", puntuaciones);

    mostrarPodio(puntuaciones);
    return 0;
}
