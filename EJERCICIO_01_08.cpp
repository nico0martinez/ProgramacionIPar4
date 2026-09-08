#include <iostream>
using namespace std;

int main(){
    float nota;

    cout << "Ingrese una nota entre 0 y 100: ";
    cin >> nota;

    while (nota < 0 || nota > 100){
        cout << "Nota invalida vuelva a intentar: ";
        cin >> nota;
    }
    cout << "Nota registrada correctamente";
    return 0;
}