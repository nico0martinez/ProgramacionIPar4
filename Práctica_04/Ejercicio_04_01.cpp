// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;

float AreaTriangulo(float base, float altura){
    float area;
    area=(base*altura)/2;
    return area;
}

int main(){
    float base, altura;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    cout<<"El area es: "<<AreaTriangulo(base, altura)<<endl;

    return 0;
}