// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;

void ConvertirDivisas(float bolivianos, float oficial, float paralelo){
    float dolaresOficial;
    float dolaresParalelo;
    dolaresOficial=bolivianos/oficial;
    dolaresParalelo=bolivianos/paralelo;
    cout<<"Dolares al tipo de cambio oficial: "<<dolaresOficial<<endl;
    cout<<"Dolares al tipo de cambio paralelo: "<<dolaresParalelo<<endl;
}

int main(){
    float bolivianos;
    float oficial;
    float paralelo;

    cout<<"Ingrese la cantidad de bolivianos: ";
    cin>>bolivianos;
    cout<<"Ingrese el tipo de cambio oficial: ";
    cin>>oficial;
    cout<<"Ingrese el tipo de cambio paralelo: ";
    cin>>paralelo;

    ConvertirDivisas(bolivianos, oficial, paralelo);

    return 0;
}