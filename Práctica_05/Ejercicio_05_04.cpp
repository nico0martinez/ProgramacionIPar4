// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

const float PI=3.1416;
double calcularArea(double lado){
    return lado*lado;
}

double calcularArea(double base, double altura){
    return base*altura;
}

float calcularArea(float radio, float pi){
    return pi*radio*radio;
}

int main(){
    double lado;
    double base;
    double altura;
    float radio;
    cout<<"Ingrese el lado del cuadrado: ";
    cin>>lado;
    cout<<"Area del cuadrado: "<<calcularArea(lado)<<endl;
    cout<<endl;
    cout<<"Ingrese la base del rectangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del rectangulo: ";
    cin>>altura;
    cout<<"Area del rectangulo: "<<calcularArea(base, altura)<< endl;
    cout<<endl;
    cout<<"Ingrese el radio del circulo: ";
    cin>>radio;
    cout<<"Area del circulo: "<<calcularArea(radio, PI)<<endl;

    return 0;
}