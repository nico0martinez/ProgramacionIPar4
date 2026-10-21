// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 24/09/2026
// Número de ejercicio: 4

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> leerVector(const string &nombre, int n){
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cout<<nombre<<"["<<i<<"]: ";
        cin>>v[i];
    }
    return v;
}

vector<int> multiplicarVectores(const vector<int> &a, const vector<int> &b){
    vector<int> r(a.size());
    for (size_t i=0; i<a.size(); i++) r[i]=a[i]*b[i];
    return r;
}

void mostrarVector(const string &nombre, const vector<int> &v){
    cout<<nombre<<" = [ ";
    for (int x:v) cout<<x<<" ";
    cout<<"]\n";
}

int main(){
    int n;
    cout<<"Dimension N de los vectores: ";
    cin>>n;
    if (n<=0){
        cout<<"N debe ser mayor que 0\n";
        return 1;
    }

    vector<int> a = leerVector("A", n);
    vector<int> b = leerVector("B", n);
    vector<int> c = multiplicarVectores(a, b);

    cout << "\n";
    mostrarVector("A", a);
    mostrarVector("B", b);
    mostrarVector("A * B", c);
    return 0;
}
