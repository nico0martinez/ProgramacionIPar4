// Materia: Programacion I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creacion: 6/9/26

#include <iostream>
using namespace std;
int main (){
    int numero;

    do{
        cout<<"Escriba un numero: "; 
        cin>>numero;
    }
    while((numero<1) || (numero>10));

    for(int i=1;i<=20;i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    cout<<"\n\n";
    system("pause");
    return 0;
}