// Materia: Programación I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creación: 24/09/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
using namespace std;

vector<int> leerCalificaciones(int n){
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cout<<"Calificacion "<<i+1<<": ";
        cin>>v[i];
    }
    return v;
}

int sumaTotal(const vector<int> &v){
    int suma=0;
    for (int x:v) suma+=x;
    return suma;
}

double promedio(const vector<int> &v){
    return (double)sumaTotal(v)/v.size();
}

vector<double> calcularDesviaciones(const vector<int> &v, double prom){
    vector<double> desv(v.size());
    for (size_t i=0; i<v.size(); i++)desv[i]=v[i]-prom;
    return desv;
}

double varianza(const vector<double> &desv){
    double suma=0;
    for (double d:desv) suma+=d*d;
    return suma/desv.size();
}

void mostrarTabla(const vector<int> &v, const vector<double> &desv){
    cout << "\nCalificacion\tDesviacion\n";
    for (size_t i=0; i<v.size(); i++)
        cout<<v[i]<<"\t\t"<<desv[i]<<"\n";
}

int main(){
    int n;
    cout<<"Cantidad de calificaciones (N): ";
    cin>>n;
    if (n<=0){
        cout<<"N debe ser mayor que 0\n";
        return 1;
    }

    vector<int> calificaciones=leerCalificaciones(n);
    double prom=promedio(calificaciones);
    vector<double> desviacion=calcularDesviaciones(calificaciones, prom);

    cout<<"\nSuma total: "<<sumaTotal(calificaciones)<<"\n";
    cout<<"Promedio: "<<prom<<"\n";
    mostrarTabla(calificaciones, desviacion);
    cout<<"\nVarianza: "<<varianza(desviacion)<<"\n";
    return 0;
}
