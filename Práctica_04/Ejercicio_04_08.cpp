// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

int ContarDigitos(int numero){
    int contador=0;
    while (numero>0){
        numero=numero/10;
        contador++;
    }

    return contador;
}

int main(){
    int numero;
    cout<<"Ingrese un numero positivo: ";
    cin>>numero;
    cout<<"La cantidad de digitos es: "
        << ContarDigitos(numero) << endl;

    return 0;
}