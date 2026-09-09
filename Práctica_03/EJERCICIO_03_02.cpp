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
    int numero;
    int suma=0;
    int sumaPares=0;
    int sumaImpares=0;
    int sumaPrimos=0;
    int i=1;

    srand(time(NULL));
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    while (i<=n){
        numero=rand() % 100+1;
        cout<<numero<<endl;
        suma=suma+numero;

        if (numero % 2 == 0){
            sumaPares=sumaPares+numero;
        }
        else{
            sumaImpares=sumaImpares+numero;
        }

        int divisores=0;
        int j=1;

        while (j<=numero){
            if (numero%j==0){
                divisores++;
            }
            j++;
        }

        if (divisores==2){
            sumaPrimos=sumaPrimos+numero;
        }
        i++;
    }

    cout<< endl;
    cout<<"Suma de todos los numeros: "<<suma<<endl;
    cout<<"Suma de los numeros pares: "<<sumaPares<<endl;
    cout<<"Suma de los numeros impares: "<<sumaImpares<<endl;
    cout<<"Suma de los numeros primos: "<<sumaPrimos<<endl;

    return 0;
}