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
    int sumaPares=0;
    int sumaImpares=0;
    int cantidadImpares=0;
    int mayorPrimo=0;

    srand(time(NULL));
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    while (i<=n){
        numero=rand()%1000+1;
        cout<<"Numero "<<i<<": "<<numero<<endl;
        
        if (numero%2==0){
            sumaPares=sumaPares+numero;
        }
        else{
            sumaImpares=sumaImpares+numero;
            cantidadImpares++;
        }       
        int divisor=1;
        int divisores=0;

        while (divisor<=numero){
            if (numero%divisor==0){
                divisores++;
            }
            divisor++;
        }

        if (divisores==2){
            if (numero>mayorPrimo){
                mayorPrimo=numero;
            }
        }
        i++;
    }

    cout<<endl;
    cout<<"Suma de numeros pares: "<<sumaPares<<endl;

    if (cantidadImpares>0){
        cout<<"Promedio de numeros impares: "<<(sumaImpares*1.0)/cantidadImpares << endl;
    }
    else{
        cout<<"No se generaron numeros impares."<< endl;
    }

    if (mayorPrimo>0){
        cout<<"Mayor numero primo: "<<mayorPrimo<<endl;
    }
    else{
        cout<<"No se genero ningun numero primo."<<endl;
    }

    return 0;
}