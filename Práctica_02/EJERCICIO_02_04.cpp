// Materia: Programacion I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creacion: 6/9/26

#include <iostream>
using namespace std;
int main (){
    int n, suma = 0;

    cout<<"Digite un numero de elementos: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        suma += i; 
    }

    cout<<"\nLa suma es: "<<suma<<endl;

    getch();
    return 0;
}