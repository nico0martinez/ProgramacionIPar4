// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int i;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    if (num1>num2){
        i=num1;

        while (i>=num2){
            cout<<i<<" ";
            i--;
        }
    }
    else{
        i=num1;
        while (i<=num2){
            cout<<i<<" ";
            i++;
        }
    }
    cout<<endl;

    return 0;
}