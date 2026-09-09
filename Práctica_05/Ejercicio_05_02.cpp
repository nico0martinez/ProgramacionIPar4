// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

void ModificarValores(int valor, int &referencia){
    valor=valor*2;
    referencia=referencia+10;
    cout<<endl;
    cout<<"Dentro de la funcion:"<<endl;
    cout<<"Valor = "<<valor<<endl;
    cout<<"Referencia = "<<referencia<<endl;
}
int main(){
    int valor;
    int referencia;

    cout<<"Ingrese el primer valor: ";
    cin>>valor;
    cout<<"Ingrese el segundo valor: ";
    cin>>referencia;
    cout<<endl;
    cout<<"Antes de la funcion:"<<endl;
    cout<<"Valor = "<<valor<<endl;
    cout<<"Referencia = "<<referencia<<endl;

    ModificarValores(valor, referencia);

    cout<<endl;
    cout<<"Despues de la funcion:"<<endl;
    cout<<"Valor = "<<valor<<endl;
    cout<<"Referencia = "<<referencia<<endl;

    return 0;
}