// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
using namespace std;


string limpiarEspacios(const string &texto){
    string resultado;
    for (char c : texto){
        if (c == ' '){
            if (!resultado.empty() && resultado.back() != ' ')
                resultado += c;
        } else{
            resultado += c;
        }
    }
    if (!resultado.empty() && resultado.back() == ' ')
        resultado.pop_back();
    return resultado;
}

int main(){
    string texto;
    cout << "Ingrese un texto con espacios de mas: ";
    getline(cin, texto);

    cout << "Resultado: \"" << limpiarEspacios(texto) << "\"\n";
    return 0;
}
