// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool esSegura(const string &clave){
    if (clave.length() < 8) return false;

    bool mayuscula = false, minuscula = false, numero = false, especial = false;
    for (unsigned char c : clave){
        if (isupper(c)) mayuscula = true;
        else if (islower(c)) minuscula = true;
        else if (isdigit(c)) numero = true;
        else if (!isspace(c)) especial = true;
    }
    return mayuscula && minuscula && numero && especial;
}

int main(){
    string clave;
    cout << "Ingrese la contrasenia: ";
    getline(cin, clave);

    if (esSegura(clave))
        cout << "Contrasenia segura\n";
    else
        cout << "Contrasenia vulnerable\n";
    return 0;
}
