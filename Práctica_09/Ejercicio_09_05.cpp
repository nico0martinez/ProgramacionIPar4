// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 07/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <iomanip>
using namespace std;

const int FILAS = 5;
const int ASIENTOS = 5;

void inicializarSala(int sala[FILAS][ASIENTOS]){
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < ASIENTOS; j++)
            sala[i][j] = 0;
}

void mostrarSala(const int sala[FILAS][ASIENTOS]){
    cout << "\n      ";
    for (int j = 0; j < ASIENTOS; j++) cout << j + 1 << " ";
    cout << "\n";
    for (int i = 0; i < FILAS; i++){
        cout << "Fila " << i + 1 << " ";
        for (int j = 0; j < ASIENTOS; j++)
            cout << (sala[i][j] == 0 ? 'L' : 'O') << " ";
        cout << "\n";
    }
}

void comprarEntrada(int sala[FILAS][ASIENTOS]){
    int fila, asiento;
    cout << "Fila (1-" << FILAS << "): ";
    cin >> fila;
    cout << "Asiento (1-" << ASIENTOS << "): ";
    cin >> asiento;

    if (fila < 1 || fila > FILAS || asiento < 1 || asiento > ASIENTOS){
        cout << "Posicion invalida\n";
    } else if (sala[fila - 1][asiento - 1] == 0){
        sala[fila - 1][asiento - 1] = 1;
        cout << "Reserva exitosa\n";
    } else{
        cout << "Asiento no disponible\n";
    }
}

void mostrarEstadisticas(const int sala[FILAS][ASIENTOS]){
    int ocupados = 0;
    for (int i = 0; i < FILAS; i++)
        for (int j = 0; j < ASIENTOS; j++)
            if (sala[i][j] == 1) ocupados++;

    int total = FILAS * ASIENTOS;
    int libres = total - ocupados;
    cout << fixed << setprecision(1);
    cout << "Asientos libres: " << libres << " (" << libres * 100.0 / total << "%)\n";
    cout << "Asientos ocupados: " << ocupados << " (" << ocupados * 100.0 / total << "%)\n";
}

void mostrarMenu(){
    cout << "\n--- CINE VIP ---\n";
    cout << "1. Mostrar la sala\n";
    cout << "2. Comprar entrada\n";
    cout << "3. Estadisticas\n";
    cout << "4. Salir\n";
    cout << "Opcion: ";
}

int main(){
    int sala[FILAS][ASIENTOS];
    inicializarSala(sala);

    int opcion;
    do{
        mostrarMenu();
        cin >> opcion;
        switch (opcion){
            case 1: mostrarSala(sala); break;
            case 2: comprarEntrada(sala); break;
            case 3: mostrarEstadisticas(sala); break;
            case 4: cout << "Hasta pronto\n"; break;
            default: cout << "Opcion invalida\n";
        }
    } while (opcion != 4);
    return 0;
}
