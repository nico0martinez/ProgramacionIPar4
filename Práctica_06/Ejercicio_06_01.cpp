// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creación: 7/9/2026
#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b){
    int aux;

    aux=a;
    a=b;
    b=aux;
}

int main(){
    int a, b;
    cout<<"Ingrese el primer valor: ";
    cin>>a;
    cout<<"Ingrese el segundo valor: ";
    cin>>b;
    cout<<"\nAntes del intercambio:"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    IntercambiarValores(a, b);

    cout<<"\nDespues del intercambio:"<<endl;
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;

    return 0;
}