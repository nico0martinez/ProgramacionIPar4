// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool tiene16Digitos(const string &tarjeta){
    if (tarjeta.length() != 16) return false;
    for (unsigned char c : tarjeta)
        if (!isdigit(c)) return false;
    return true;
}

bool esTarjetaValida(const string &tarjeta){
    if (!tiene16Digitos(tarjeta)) return false;

    int suma = 0;
    bool duplicar = false;
    for (int i = (int)tarjeta.length() - 1; i >= 0; i--){
        int digito = tarjeta[i] - '0';
        if (duplicar) {
            digito *= 2;
            if (digito > 9) digito -= 9;
        }
        suma += digito;
        duplicar = !duplicar;
    }
    return suma % 10 == 0;
}

int main(){
    string tarjeta;
    cout << "Ingrese los 16 digitos de la tarjeta: ";
    getline(cin, tarjeta);

    if (!tiene16Digitos(tarjeta))
        cout << "Entrada invalida\n";
    else if (esTarjetaValida(tarjeta))
        cout << "Tarjeta VALIDA\n";
    else
        cout << "Tarjeta NO valida\n";
    return 0;
}
