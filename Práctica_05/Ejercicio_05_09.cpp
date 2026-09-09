// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int n;
    int i=1;
    int numero;
    int divisor;
    int divisores;
    int cantidadPrimos=0;

    srand(time(NULL));
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    while (i<=n){
        numero=rand()%10000+1;
        cout<<"Numero "<<i<<": "<<numero;
        divisores=0;
        divisor=1;

        while (divisor<=numero){
            if (numero%divisor==0){
                divisores++;
            }
            divisor++;
        }

        if (divisores==2){
            cout<<"Primo";
            cantidadPrimos++;
        }

        cout<<endl;
        i++;
    }

    cout<<endl;
    cout<<"Cantidad de numeros primos: "<<cantidadPrimos<<endl;

    return 0;
}