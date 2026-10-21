// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
using namespace std;

void analizarURL(const string &url){
    size_t finProtocolo = url.find("://");
    if (finProtocolo == string::npos){
        cout << "URL invalida (falta ://)\n";
        return;
    }

    string protocolo = url.substr(0, finProtocolo);
    string resto = url.substr(finProtocolo + 3);

    size_t inicioRuta = resto.find('/');
    string dominio, ruta;
    if (inicioRuta == string::npos){
        dominio = resto;
        ruta = "/";
    } else{
        dominio = resto.substr(0, inicioRuta);
        ruta = resto.substr(inicioRuta);
    }

    cout << "Protocolo: " << protocolo << "\n";
    cout << "Dominio: " << dominio << "\n";
    cout << "Ruta: " << ruta << "\n";
}

int main(){
    string url;
    cout << "Ingrese una URL: ";
    getline(cin, url);
    analizarURL(url);
    return 0;
}
