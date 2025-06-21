#include <iostream>
using namespace std;

int main() {
    double DiasMin[7], DiasMax[7];
    cout<<"Ingrese la temperaturas de cada dia: "<<endl;
    for (int i = 0; i < 7; i++) {
        cout<<"-- Dia "<<i+1<<" --"<<endl;
        cout<<"Temperatura minima: "; cin>>DiasMin[i];
        cout<<"Temperatura maxima: "; cin>>DiasMax[i];
        if (DiasMin[i] > DiasMax[i]) {
            cout<<"\nERROR al ingresar los datos";
            return 1;
        }
    }
    cout<<"--Temperatura media de cada dia--"<<endl;
    for (int i = 0; i < 7; i++) {
        float Prom = (DiasMin[i] + DiasMax[i])/2;
        cout<<"Dia "<<i+1<<": "<<Prom<<endl;
    }
    float min = DiasMin[0];
    cout<<"--Dia(s) con la menor temperatura--"<<endl;
    for (int i = 0; i < 7; i++) {
        if (DiasMin[i] < min) 
            min = DiasMin[i];
    }
    for (int i = 0; i < 7; i++) {
        if (min == DiasMin[i])
            cout<<"Dia "<<i+1<<endl;
    }
    double temp;
    int c = 0;
    cout<<"--Encontrar temperatura maxima--"<<endl;
    cout<<"ingrese temperatura: "; cin>>temp;
    for (int i = 0; i < 7; i++) {
        if (temp == DiasMax[i]) {
            cout<<"Dia "<<i+1<<endl;
            c = c + 1;
        }
    }
    if (c == 0)
        cout<<"Ningun dia tiene esa temperatura maxima";
    return 0;
}