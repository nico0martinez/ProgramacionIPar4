// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b){
    int auxiliar;
    auxiliar=a;
    a=b;
    b=auxiliar;
}

int main(){
    int a, b;
    cout<<"Ingrese el primer valor: ";
    cin>>a;
    cout<<"Ingrese el segundo valor: ";
    cin>>b;
    cout<<endl;
    cout<<"Antes del intercambio:"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    IntercambiarValores(a, b);

    cout<<endl;
    cout<<"Despues del intercambio:"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    return 0;
}
