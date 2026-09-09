// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

int main(){
    int numero;
    int divisor=1;
    int suma=0;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (divisor<numero){
        if (numero%divisor==0){
            suma=suma+divisor;
        }
        divisor++;
    }

    if (suma==numero){
        cout<<"El numero es perfecto."<<endl;
    }
    else{
        cout<<"El numero no es perfecto."<<endl;
    }

    return 0;
}