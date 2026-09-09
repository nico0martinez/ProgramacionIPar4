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
    int precioBase;
    float utilidad;
    float iva;
    float total;
    float descuento;
    float totalFinal;
    float sumaTotal=0;
    float sumaIVA=0;
    float sumaDescuentos=0;
    float productoCaro=0;
    float productoBarato=0;

    srand(time(NULL));
    cout<<"Ingrese la cantidad de productos vendidos: ";
    cin>>n;

    while (i<=n){
        precioBase=rand()%9991+10;
        utilidad=precioBase*0.87;
        iva=precioBase*0.13;
        total=utilidad+iva;
        descuento = 0;

        if (total>2500){
            descuento=total*0.05;
        }
        totalFinal = total - descuento;

        cout<< endl;
        cout<<"Producto "<<i<<endl;
        cout<<"Precio base: "<<precioBase<<" Bs"<<endl;
        cout<<"Utilidad: "<<utilidad<<" Bs"<<endl;
        cout<<"IVA: "<<iva<<" Bs"<<endl;
        cout<<"Descuento: "<<descuento<<" Bs"<<endl;
        cout<<"Precio final: "<<totalFinal<<" Bs"<<endl;
        sumaTotal=sumaTotal+totalFinal;
        sumaIVA=sumaIVA+iva;
        sumaDescuentos=sumaDescuentos+descuento;
        if (i==1){
            productoCaro=totalFinal;
            productoBarato=totalFinal;
        }
        else{
            if (totalFinal>productoCaro){
                productoCaro=totalFinal;
            }
            if(totalFinal<productoBarato){
                productoBarato=totalFinal;
            }
        }
        i++;
    }
    cout<<endl;
    cout<<"========== REPORTE DEL DIA =========="<<endl;
    cout<<"Suma total del dinero ingresado: "
         <<sumaTotal<<" Bs"<<endl;
    cout <<"IVA total acumulado: "
         <<sumaIVA<<" Bs"<<endl;
    cout <<"Dinero total descontado: "
         <<sumaDescuentos<<" Bs"<<endl;
    cout <<"Producto mas caro: "
         <<productoCaro<<" Bs"<<endl;
    cout <<"Producto mas barato: "
         <<productoBarato<<" Bs"<<endl;

    return 0;
}