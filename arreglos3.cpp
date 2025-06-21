#include <iostream>
using namespace std;

int main() {
    double DiasMin[7], DiasMax[7];
    cout<<"Ingrese la temperaturas de cada dia: "<<endl;
    for (int i = 0; i < 7; i++) {
        cout<<"-- Dia "<<i+1<<" --"<<endl;
        cout<<"Temperatura minima: "; cin>>DiasMin[i];
        cout<<"Temperatura maxima: "; cin>>DiasMax[i];
    }
    cout<<"--Temperatura media de cada dia--"<<endl;
    for (int i = 0; i < 7; i++) {
        float Prom = (DiasMin[i] + DiasMax[i])/2;
        cout<<"Dia "<<i+1<<": "<<Prom<<endl;
    }
    return 0;
}