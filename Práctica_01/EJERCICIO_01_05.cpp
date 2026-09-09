// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int numAleatorio;
    int num;
    int intentos=0;

    srand(time(NULL));
    numAleatorio=rand()%100+1;
    cout<<"Adivina el numero entre 1 y 100."<<endl;

    do{
        cout<<"Ingrese un numero: ";
        cin>>num;
        intentos++;

        if (num<numAleatorio){
            cout<<"El numero que buscas es MAYOR."<<endl;
        }
        else if (num>numAleatorio){
            cout<<"El numero que buscas es MENOR."<<endl;
        }
        else{
            cout<<"Correcto!"<<endl;
        }

    } while (num!=numAleatorio);
    cout<<"Numero de intentos: "<<intentos<<endl;

    return 0;
}