// Materia: Programacion I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creacion: 6/9/26

#include <iostream>
using namespace std;
int main () {
    int numero, suma = 0;
    do{
        cout<<"Ingrese un numero: "; cin>>numero;
    } while (((numero<20) || (numero>30)) && (numero !=0));

    cout<<"\nLa suma es: "<<suma<<endl;

    system("pause");

    return 0;
}