#include <iostream>
using namespace std;

int main(){
    int n;
    int digito;
    int fila;
    int columna;

    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> n;

    while (n > 0){
        digito = n % 10;
        cout << "Cuadricula de " << digito << " x " << digito << ":" << endl;
        fila = 1;

        while (fila <= digito){
            columna = 1;

            while (columna <= digito){
                cout << "* ";
                columna = columna + 1;
            }

            cout << endl;
            fila = fila + 1;
        }

        n = n / 10;
    }
    return 0;
}