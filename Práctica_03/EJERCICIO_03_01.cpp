// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/26
#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cout<<"Ingrese un numero del 1 al 10: ";
    cin>>n;

    if (n>=1 && n<=10){
        while (i<=10){
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;
            i++;
        }
    }
    else{
        cout<<"El numero debe estar entre 1 y 10."<<endl;
    }

    return 0;
}