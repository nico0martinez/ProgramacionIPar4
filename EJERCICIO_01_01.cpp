#include <iostream>
using namespace std;

int main(){
    int anno;

    cout << "Ingrese un año de 4 digitos: ";
    cin >> anno;

    if (anno % 400 == 0){
        cout << "El año es bisiesto";
    } 
    else{
        if (anno % 4 == 0 && anno % 100 != 0){
            cout << "El año es bisiesto";
        } 
        else{
            cout << "El año no es bisiesto";
        }
    }
    return 0;
}