// Materia: Programación I, Paralelo 4
// Autor: Nicolás Martínez
// Carrera del estudiante: Comunicación Digital Multimedia
// Fecha creación: 6/9/2026
#include <iostream>
using namespace std;

float LeerNota();
float CalcularPromedio(float nota1, float nota2, float nota3);
float CalcularNotaFinal(float promedio, float examen);
void MostrarResultado(float nota1, float nota2, float nota3, float examen, float notaFinal, bool aprobado);

float LeerNota(){
    float nota;
    do{
        cout<<"Ingrese una nota entre 0 y 100: ";
        cin>>nota;

        if (nota<0 || nota>100){
            cout<<"Nota invalida."<<endl;
        }
    } while (nota<0 || nota>100);

    return nota;
}

float CalcularPromedio(float nota1, float nota2, float nota3){
    float promedio;
    promedio=(nota1+nota2+nota3)/3;

    return promedio;
}

float CalcularNotaFinal(float promedio, float examen){
    float notaFinal;

    notaFinal=(promedio*0.5)+(examen*0.5);

    return notaFinal;
}

void MostrarResultado(float nota1, float nota2, float nota3, float examen, float notaFinal, bool aprobado){
    cout<<endl;
    cout<<"RESULTADO"<<endl;
    cout<<"Nota parcial 1: "<<nota1<<endl;
    cout<<"Nota parcial 2: "<<nota2<<endl;
    cout<<"Nota parcial 3: "<<nota3<<endl;
    cout<<"Examen final: "<<examen<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;

    if (aprobado){
        cout<<"ESTADO: APROBADO"<<endl;
    }
    else{
        cout<<"ESTADO: REPROBADO"<<endl;
    }
}

int main(){
    int n;
    int i=1;
    float nota1;
    float nota2;
    float nota3;
    float examen;
    float promedio;
    float notaFinal;
    int aprobados=0;
    int reprobados=0;
    float sumaNotasFinales=0;
    float promedioGeneral;
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin>>n;

    while (i<=n){
        cout<<endl;
        cout<<"ESTUDIANTE "<<i<<endl;
        cout<<"NOTA PARCIAL 1"<<endl;
        nota1=LeerNota();
        cout << "NOTA PARCIAL 2"<<endl;
        nota2=LeerNota();
        cout<<"NOTA PARCIAL 3"<<endl;
        nota3=LeerNota();
        promedio=CalcularPromedio(nota1, nota2, nota3);

        if (nota1>=60 && nota2>=60 && nota3>=60){
            cout<<"NOTA EXAMEN FINAL"<<endl;
            examen=LeerNota();
            notaFinal=CalcularNotaFinal(promedio, examen);

            if (notaFinal>=51){
                aprobados++;
                MostrarResultado(nota1, nota2, nota3, examen, notaFinal, true);
            }
            else{
                reprobados++;
                MostrarResultado(nota1, nota2, nota3, examen, notaFinal, false);
            }
        }
        else{
            examen=0;
            notaFinal=0;
            reprobados++;
            MostrarResultado(nota1, nota2, nota3, examen, notaFinal, false);
        }
        sumaNotasFinales=sumaNotasFinales+notaFinal;
        i++;
    }

    promedioGeneral=sumaNotasFinales/n;
    cout<<endl;
    cout<<"REPORTE GENERAL"<<endl;
    cout<<"Cantidad de aprobados: "<<aprobados<<endl;
    cout<<"Cantidad de reprobados: "<<reprobados<<endl;
    cout<<"Porcentaje de aprobados: "<<(aprobados*100.0)/n<<"%"<<endl;
    cout<<"Porcentaje de reprobados: "<<(reprobados*100.0)/n<<"%"<<endl;
    cout<<"Promedio de notas finales: "<<promedioGeneral<<endl;

    return 0;
}