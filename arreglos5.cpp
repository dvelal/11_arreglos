#include <iostream>
#include <string>
using namespace std;

void ingresarNombres(string arreglo[], int cant) {
    cout<<"Ingrese los nombres: "<<endl;
    for (int i = 0; i < cant; i++) {
        cout<<"- "; cin>>arreglo[i];
    }
}

int main() {
    int fp, pg;
    cout<<"Cantidad de estudientes de Fundamentos de Programacion: "; cin>>fp;
    string FP[fp];
    ingresarNombres(FP, fp);
    cout<<"Cantidad de estudientes de Programacion Grafica: "; cin>>pg;
    string PG[pg];
    ingresarNombres(PG, pg);
    cout<<"--Estudiantes en comun--"<<endl;
    int c = 0;
    for (int i = 0; i < fp; i++) {
        for (int j = 0; j < pg; j++) {
            if (PG[i] == FP[j])
                c++;
        }
    }
    string C[c];
    int k = 0;
    for (int i = 0; i < fp; i++) {
        for (int j = 0; j < pg; j++) {
            if (PG[i] == FP[j]) {
                C[k] = PG[i];
                k++;
            }
        }
    }
    for (int i = 0; i < c; i++) {
        cout<<"- "<<C[i]<<endl;
    }
    return 0;
}