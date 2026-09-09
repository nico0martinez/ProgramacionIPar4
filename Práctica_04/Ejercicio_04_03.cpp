// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

const float PI=3.1416;
float VolumenCilindro(float radio, float altura){
    float volumen;
    volumen=PI*radio*radio*altura;
    return volumen;
}

int main(){
    float radio, altura;
    cout<<"Ingrese el radio: ";
    cin>>radio;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    cout<<"El volumen es: "<<VolumenCilindro(radio, altura)<<endl;

    return 0;
}