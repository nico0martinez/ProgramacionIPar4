// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 07/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef vector<vector<int>> Matriz;

Matriz generarMatriz(int n, int m){
    Matriz mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            mat[i][j] = 1 + rand() % 10;
    return mat;
}

void mostrarMatriz(const Matriz &mat){
    for (const auto &fila : mat) {
        for (int x : fila) cout << x << "\t";
        cout << "\n";
    }
}

int menorDeFila(const Matriz &mat, int fila){
    int menor = mat[fila][0];
    for (int x : mat[fila]) if (x < menor) menor = x;
    return menor;
}

int mayorDeColumna(const Matriz &mat, int columna){
    int mayor = mat[0][columna];
    for (const auto &fila : mat) if (fila[columna] > mayor) mayor = fila[columna];
    return mayor;
}

bool buscarPuntoSilla(const Matriz &mat){
    bool encontrado = false;
    for (size_t i = 0; i < mat.size(); i++){
        int menorFila = menorDeFila(mat, i);
        for (size_t j = 0; j < mat[i].size(); j++){
            if (mat[i][j] == menorFila && mat[i][j] == mayorDeColumna(mat, j)){
                cout << "Punto de silla: " << mat[i][j] << " en (fila " << i + 1
                     << ", columna " << j + 1 << ")\n";
                encontrado = true;
            }
        }
    }
    return encontrado;
}

int main(){
    srand(time(nullptr));
    int n, m;
    cout << "Filas (N): ";
    cin >> n;
    cout << "Columnas (M): ";
    cin >> m;
    if (n <= 0 || m <= 0){
        cout << "Dimensiones invalidas\n";
        return 1;
    }

    Matriz mat = generarMatriz(n, m);
    cout << "\nMatriz:\n";
    mostrarMatriz(mat);
    cout << "\n";

    if (!buscarPuntoSilla(mat))
        cout << "No se encontro ningun punto de silla\n";
    return 0;
}
