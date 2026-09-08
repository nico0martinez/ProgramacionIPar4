#include <iostream>
using namespace std;

int main(){
    int n;
    int digito;
    int cantidad = 0;
    int suma = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    while (n > 0){
        digito = n % 10;
        suma = suma + digito;
        cantidad = cantidad + 1;
        n = n / 10;
    }
    cout << "Cantidad de digitos: " << cantidad << endl;
    cout << "Suma de los digitos: " << suma;
    return 0;
}