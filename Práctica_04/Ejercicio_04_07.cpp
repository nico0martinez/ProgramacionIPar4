// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

float Distancia(float velocidad, float tiempo){
    float distancia;
    distancia=velocidad*tiempo;
    return distancia;
}

int main(){
    float velocidad;
    float tiempo;
    cout<<"Ingrese la velocidad: ";
    cin>>velocidad;
    cout<<"Ingrese el tiempo: ";
    cin>>tiempo;
    cout<<"La distancia recorrida es: "<<Distancia(velocidad, tiempo) << endl;

    return 0;
}