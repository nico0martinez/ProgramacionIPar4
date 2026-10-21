// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 24/09/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> leerVector(const string &nombre, int n){
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << nombre << "[" << i << "]: ";
        cin >> v[i];
    }
    return v;
}

vector<int> combinarVectores(const vector<int> &a, const vector<int> &b){
    vector<int> c;
    for (int x : a) c.push_back(x);
    for (int x : b) c.push_back(x);
    return c;
}

void mostrarVector(const string &nombre, const vector<int> &v){
    cout << nombre << " = [ ";
    for (int x : v) cout << x << " ";
    cout << "]\n";
}

int main(){
    int n;
    cout << "Dimension N de los vectores: ";
    cin >> n;
    if (n <= 0) {
        cout << "N debe ser mayor que 0\n";
        return 1;
    }

    vector<int> a = leerVector("A", n);
    vector<int> b = leerVector("B", n);
    vector<int> c = combinarVectores(a, b);

    cout << "\n";
    mostrarVector("A", a);
    mostrarVector("B", b);
    mostrarVector("Combinado", c);
    return 0;
}
