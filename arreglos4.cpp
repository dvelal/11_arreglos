#include <iostream>
using namespace std;

void llenarMultiplos(int tam, int base, double Mult[]) {
    for (int i = 0; i < tam; i++) {
        Mult[i] = base * (i + 1);
    }
}

int main() {
    int tam, base;
    cout<<"Ingrese la dimension del arreglo: "; cin>>tam;
    double Mult[tam];
    cout<<"Ingrese la numero base de multiplos: "; cin>>base;
    llenarMultiplos(tam, base, Mult);
    cout<<"--Arreglo con sus "<<tam<<" multiplos--"<<endl;
    for (int i = 0; i < tam; i++) {
        cout<<Mult[i]<<" ";
    }
    return 0;
}