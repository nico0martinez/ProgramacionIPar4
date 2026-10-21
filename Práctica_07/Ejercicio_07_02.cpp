// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 24/09/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
using namespace std;

vector<double> cargarVoltios(){
    return {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
}

void mostrarVoltios(const vector<double> &voltios){
    for (size_t i=0; i<voltios.size(); i++){
        cout<<voltios[i]<<"\t";
        if ((i+1)%3==0) cout<<"\n";
    }
}

int main(){
    vector<double> voltios=cargarVoltios();
    mostrarVoltios(voltios);
    return 0;
}
