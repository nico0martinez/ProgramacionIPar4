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
    int moneda;
    int caras=0;
    int cruces=0;

    srand(time(NULL));
    cout<<"Ingrese la cantidad de lanzamientos: ";
    cin>>n;

    while (i<=n){
        moneda=rand()%2;
        if (moneda==0){
            cout<<"Lanzamiento "<<i<<": Cara"<<endl;
            caras++;
        }
        else{
            cout<<"Lanzamiento "<<i<<": Cruz"<<endl;
            cruces++;
        }

        i++;
    }

    cout<<endl;
    cout<<"Cantidad de caras: "<<caras<<endl;
    cout<<"Cantidad de cruces: "<<cruces<<endl;
    cout<<"Porcentaje de caras: "<<(caras * 100.0)/n<<"%"<<endl;
    cout<<"Porcentaje de cruces: "<<(cruces * 100.0)/n<<"%"<<endl;

    return 0;
}