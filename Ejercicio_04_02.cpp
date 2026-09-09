// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 21/08/2026
#include <iostream>
using namespace std;

int Mayor(int a, int b, int c){
    int mayor;
    if (a>b && a>c){
        mayor=a;
    }
    else{
        if (b>c){
            mayor=b;
        }
        else{
            mayor=c;
        }
    }

    return mayor;
}

int main(){
    int a, b, c;

    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"Ingrese el tercer numero: ";
    cin>>c;
    cout<<"El mayor es: "<<Mayor(a, b, c)<<endl;

    return 0;
}