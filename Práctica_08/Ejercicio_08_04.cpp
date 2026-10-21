// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string aMinusculas(string texto){
    for (char &c : texto) c = tolower((unsigned char)c);
    return texto;
}

string censurarMensaje(string mensaje, const vector<string> &prohibidas){
    string minus = aMinusculas(mensaje);   
    for (const string &palabra : prohibidas){
        string buscada = aMinusculas(palabra);
        if (buscada.empty()) continue;
        size_t pos = minus.find(buscada);
        while (pos != string::npos){
            mensaje.replace(pos, buscada.length(), "***");
            minus.replace(pos, buscada.length(), "***");
            pos = minus.find(buscada, pos + 3);
        }
    }
    return mensaje;
}

int main(){
    vector<string> prohibidas = {"tonto", "manco", "noob"};

    string mensaje;
    cout << "Mensaje del jugador: ";
    getline(cin, mensaje);

    cout << "Mensaje filtrado: " << censurarMensaje(mensaje, prohibidas) << "\n";
    return 0;
}
