// Materia: Programacion I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creacion: 6/9/26

#include <iostream>
#include <conio.h>
using namespace std;
int main () {
    int suma = 0, cuadrado;

    for(int i=1;i<=10;i++){
        cuadrado = i * i;
        suma += cuadrado; //suma= suma + cuadrado
    }

    cout<<"El resultado de la suma es: "<<suma<<endl;

    getch ();
    return 0;
}