// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int numero;
    int i=1;
    int factorial=1;

    srand(time(NULL));
    numero=rand()%10+1;
    cout<<"Numero generado: "<<numero<<endl;
    while (i<=numero){
        factorial=factorial*i;
        i++;
    }

    cout<<"Factorial: "<<factorial<<endl;

    return 0;
}