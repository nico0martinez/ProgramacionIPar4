// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

int Sumatoria(int n){
    int suma=0;
    int i=1;

    while (i<=n){
        suma=suma+i;
        i++;
    }

    return suma;
}

int main(){
    int n;
    cout<<"Ingrese un numero positivo: ";
    cin>>n;
    cout<<"La sumatoria es: "<<Sumatoria(n)<<endl;

    return 0;
}