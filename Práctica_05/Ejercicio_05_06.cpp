// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota){
    sumaTotal=sumaTotal+nuevaNota;
    cantidadNotas++;
}

int main(){
    int n;
    int i=1;
    double sumaTotal=0;
    double nuevaNota;
    int cantidadNotas=0;
    
    cout<<"Ingrese la cantidad de notas: ";
    cin>>n;

    while (i<=n){
        cout<<"Ingrese la nota "<<i<<": ";
        cin>>nuevaNota;
        agregarNota(sumaTotal, cantidadNotas, nuevaNota);
        i++;
    }

    cout<<endl;
    cout<<"Suma total: "<<sumaTotal<<endl;
    cout<<"Cantidad de notas: "<<cantidadNotas<<endl;

    return 0;
}