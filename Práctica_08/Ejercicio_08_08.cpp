// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>
using namespace std;

string aMinusculas(string texto){
    for (char &c : texto) c = tolower((unsigned char)c);
    return texto;
}

// Divide una oracion en palabras
vector<string> dividirPalabras(const string &oracion){
    vector<string> palabras;
    stringstream ss(oracion);
    string palabra;
    while (ss >> palabra) palabras.push_back(palabra);
    return palabras;
}

vector<string> palabrasEnComun(const string &a, const string &b){
    vector<string> palabrasA = dividirPalabras(a);
    vector<string> palabrasB = dividirPalabras(b);
    vector<string> comunes;

    for (const string &pa : palabrasA){
        for (const string &pb : palabrasB){
            if (aMinusculas(pa) == aMinusculas(pb)){
                comunes.push_back(pa);
                break;
            }
        }
    }
    return comunes;
}

bool hayPlagio(const string &a, const string &b, vector<string> &comunes){
    comunes = palabrasEnComun(a, b);
    return comunes.size() > 3;
}

int main(){
    string oracionA, oracionB;
    cout << "Oracion A: ";
    getline(cin, oracionA);
    cout << "Oracion B: ";
    getline(cin, oracionB);

    vector<string> comunes;
    bool plagio = hayPlagio(oracionA, oracionB, comunes);

    cout << "Alerta de plagio: " << (plagio ? "Verdadero" : "Falso");
    if (!comunes.empty()){
        cout << " (coinciden ";
        for (size_t i = 0; i < comunes.size(); i++){
            cout << "\"" << comunes[i] << "\"";
            if (i + 1 < comunes.size()) cout << ", ";
        }
        cout << ")";
    }
    cout << "\n";
    return 0;
}
