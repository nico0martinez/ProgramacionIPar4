// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026

#include <iostream>
using namespace std;

float CalcularPrecioTotal(float precio, float impuesto = 13){
    float precioTotal;
    precioTotal=precio+(precio*impuesto/100);
    return precioTotal;
}

int main(){
    float precio;
    float impuesto;
    cout<<"Ingrese el precio base: ";
    cin>>precio;
    cout<<endl;
    cout<<"Precio con IVA del 13%: "<<CalcularPrecioTotal(precio)<<endl;
    cout<<endl;
    cout<<"Ingrese otro porcentaje de impuesto: ";
    cin>>impuesto;
    cout<<"Precio con el impuesto indicado: "<<CalcularPrecioTotal(precio, impuesto)<<endl;

    return 0;
}