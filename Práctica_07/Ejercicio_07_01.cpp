// Materia: Programacion I, Paralelo 4
// Autor: Nicolas Martinez Bellido
// Fecha creacion: 24/09/2026
// Numero de ejercicio: 1

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

double aleatorioReal(double minimo, double maximo){
    double r=minimo+(rand()/(double)RAND_MAX)*(maximo-minimo);
    return round(r*100.0)/100.0;
}

vector<double> generarVoltajes(){
    vector<double> v(100);
    for (double &x:v)x=aleatorioReal(20.0, 220.0);
    return v;
}

vector<double> generarTemperaturas(){
    vector<double> v(50);
    for (double &x:v)x=aleatorioReal(0.0, 100.0);
    return v;
}

vector<char> generarCaracteres(){
    const string alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    vector<char> v(30);
    for (char &c:v)c=alfabeto[rand()%alfabeto.size()];
    return v;
}

vector<int> generarAnios(){
    vector<int> v(100);
    for (int &x:v)x=1990+rand()%(2025-1990+1);
    return v;
}

vector<double> generarVelocidades() {
    vector<double> v(32);
    for (double &x : v) x = aleatorioReal(10.0, 300.0);
    return v;
}

vector<double> generarDistancias(){
    vector<double> v(1000);
    for (double &x : v) x=aleatorioReal(1.0, 1000.0);
    return v;
}


template <typename T>
void mostrarVector(const string &titulo, const vector<T> &v){
    cout<<"\n=== "<<titulo<<" ("<<v.size()<<" elementos) ===\n";
    for (size_t i=0; i<v.size(); i++){
        cout<<v[i]<<"\t";
        if ((i+1)%10==0) cout<<"\n";
    }
    cout<<"\n";
}

int main(){
    srand(time(nullptr));
    mostrarVector("Voltajes (V)", generarVoltajes());
    mostrarVector("Temperaturas", generarTemperaturas());
    mostrarVector("Caracteres alfanumericos", generarCaracteres());
    mostrarVector("Anios", generarAnios());
    mostrarVector("Velocidades", generarVelocidades());
    mostrarVector("Distancias", generarDistancias());
    return 0;
}