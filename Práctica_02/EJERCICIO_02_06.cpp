// Materia: Programacion I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera: Comunicacion Digital Multimedia
// Fecha de Creacion: 6/9/26

#include <iostream>
using namespace std;
int main (){
    int numero, dato, contador = 0;

    srand(time(NULL)); 
    dato = 1 + rand()%(100); //25

    do{
        cout<<"\nDigite un numero menor\n"; //15

        if(numero>dato){
            cout<<"\nDigite un numero menor\n";
        }
        if(numero<dato){
            cout<<"\bDigite un numero mayor\n";
        }
    }while(numero != dato);

    cout<<"nFELICIDADES, ADIVINASTE EL NUMERO n";
    cout<<"Numero de intentos: "<<contador<<endl;

    system( ("pause");
    return 0;
    }


}