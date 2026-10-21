// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 07/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SEMANAS = 4;
const int DIAS = 7;

void generarTemperaturas(int temperaturas[SEMANAS][DIAS]){
    for (int s = 0; s < SEMANAS; s++)
        for (int d = 0; d < DIAS; d++)
            temperaturas[s][d] = 5 + rand() % (35 - 5 + 1);
}

void mostrarTemperaturas(const int temperaturas[SEMANAS][DIAS]){
    cout << "          ";
    for (int d = 0; d < DIAS; d++) cout << "Dia" << d + 1 << "\t";
    cout << "\n";
    for (int s = 0; s < SEMANAS; s++) {
        cout << "Semana " << s + 1 << " ";
        for (int d = 0; d < DIAS; d++) cout << temperaturas[s][d] << "\t";
        cout << "\n";
    }
}

void temperaturaMasAlta(const int temperaturas[SEMANAS][DIAS], int &maxTemp, int &semana, int &dia){
    maxTemp = temperaturas[0][0];
    semana = 0;
    dia = 0;
    for (int s = 0; s < SEMANAS; s++)
        for (int d = 0; d < DIAS; d++)
            if (temperaturas[s][d] > maxTemp){
                maxTemp = temperaturas[s][d];
                semana = s;
                dia = d;
            }
}

double promedioSemana(const int temperaturas[SEMANAS][DIAS], int semana){
    double suma = 0;
    for (int d = 0; d < DIAS; d++) suma += temperaturas[semana][d];
    return suma / DIAS;
}

// Dias del mes con temperatura mayor a un limite
int contarDiasSobre(const int temperaturas[SEMANAS][DIAS], int limite){
    int cantidad = 0;
    for (int s = 0; s < SEMANAS; s++)
        for (int d = 0; d < DIAS; d++)
            if (temperaturas[s][d] > limite) cantidad++;
    return cantidad;
}

int main(){
    srand(time(nullptr));
    int temperaturas[SEMANAS][DIAS];

    generarTemperaturas(temperaturas);
    cout << "Temperaturas registradas (grados C):\n";
    mostrarTemperaturas(temperaturas);

    int maxTemp, semana, dia;
    temperaturaMasAlta(temperaturas, maxTemp, semana, dia);
    cout << "\nTemperatura mas alta: " << maxTemp << " C (semana " << semana + 1
         << ", dia " << dia + 1 << ")\n";

    cout << "\nPromedio por semana:\n";
    cout << fixed << setprecision(2);
    for (int s = 0; s < SEMANAS; s++)
        cout << "Semana " << s + 1 << ": " << promedioSemana(temperaturas, s) << " C\n";

    cout << "\nDias con temperatura mayor a 30 C: " << contarDiasSobre(temperaturas, 30) << "\n";
    return 0;
}
