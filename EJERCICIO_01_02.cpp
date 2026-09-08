#include <iostream>
using namespace std;

int main() {
    float precio, precioFinal;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    precioFinal = precio + precio * 0.13;

    cout << "El precio con IVA es: " << precioFinal;

    return 0;
}