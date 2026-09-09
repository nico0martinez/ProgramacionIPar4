// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int suma=0;

    cout<<"Ingrese n: ";
    cin>>n;

    while (i<=n){
        suma=suma+i;
        i++;
    }
    cout<<"El resultado es: "<<suma<<endl;

    return 0;
}