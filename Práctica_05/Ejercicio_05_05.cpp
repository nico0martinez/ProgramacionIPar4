// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
    horas=totalSegundos/3600;
    totalSegundos=totalSegundos%3600;
    minutos=totalSegundos/60;
    segundos=totalSegundos%60;
}

int main(){
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    cout<<"Ingrese la cantidad de segundos: ";
    cin>>totalSegundos;
    calcularTiempo(totalSegundos, horas, minutos, segundos);
    cout<<endl;
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<minutos<<endl;
    cout<<"Segundos: "<<segundos<<endl;

    return 0;
}
