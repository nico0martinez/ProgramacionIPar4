#include <iostream>
using namespace std;

int main(){
    int edad;
    int sexo;
    float altura;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su sexo (1= Masculino, 2= Femenino): ";
    cin >> sexo;

    cout << "Ingrese su altura en metros: ";
    cin >> altura <<endl;
    cout << "Edad: " << edad << endl;

    if (sexo == 1){
        cout << "Sexo: Masculino" << endl;
    } 
    else{
        cout << "Sexo: Femenino" << endl;
    }

    cout << "Altura: " << altura << " metros";
    return 0;
}