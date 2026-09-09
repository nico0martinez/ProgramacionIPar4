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
    int ninos1;
    int ninos2;
    int ninos3;
    int restantes;
    int panales1;
    int panales2;
    int panales3;
    int totalPanales;

    srand(time(NULL));
    cout<<"Ingrese la cantidad total de ninos: ";
    cin>>n;
    ninos1=rand()%(n+1);
    restantes=n-ninos1;
    ninos2=rand()%(restantes+1);
    ninos3=n-ninos1-ninos2;
    panales1=ninos1*6;
    panales2=ninos2*3;
    panales3=ninos3*2;
    totalPanales=panales1+panales2+panales3;
    cout<<endl;
    cout<<"GUARDERIA"<<endl;
    cout<<"Ninos de 1 año: "<<ninos1<<endl;
    cout<<"Ninos de 2 años: "<<ninos2<<endl;
    cout<<"Ninos de 3 años: "<<ninos3<<endl;
    cout<<endl;
    cout<<"Panales para niños de 1 año: "<<panales1<<endl;
    cout<<"Panales para niños de 2 años: "<<panales2<<endl;
    cout<<"Panales para niños de 3 años: "<<panales3<<endl;
    cout<<endl;
    cout<<"TOTAL DE PANALES POR DIA: "<<totalPanales<<endl;

    return 0;
}