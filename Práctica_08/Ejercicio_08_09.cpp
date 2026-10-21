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

vector<string> buscarContactos(const vector<string> &contactos, const string &prefijo){
    vector<string> resultados;
    string pref = aMinusculas(prefijo);
    for (const string &contacto : contactos){
        if (aMinusculas(contacto).compare(0, pref.length(), pref) == 0)
            resultados.push_back(contacto);
    }
    return resultados;
}

void mostrarResultados(const vector<string> &resultados){
    if (resultados.empty()){
        cout << "Sin resultados\n";
        return;
    }
    cout << "Resultados: ";
    for (size_t i = 0; i < resultados.size(); i++){
        cout << resultados[i];
        if (i + 1 < resultados.size()) cout << ", ";
    }
    cout << "\n";
}

int main(){
    vector<string> contactos = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};

    string prefijo;
    cout << "Prefijo de busqueda (3 letras): ";
    getline(cin, prefijo);

    mostrarResultados(buscarContactos(contactos, prefijo));
    return 0;
}
