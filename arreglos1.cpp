#include <iostream>
using namespace std;

void proceso (int &, int &, int &);

int main() {
    int n, s, c;
    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    int A[n];
    s = 0;
    c = 0;

    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el elemento "<<i+1<<": "; cin>>A[i];
        proceso(A[i], s, c);
    }
    float porc = (c*100.0)/n;
    cout<<"Sumatoria de elementos: "<<s<<endl;
    cout<<"Porcentaje de ceros: "<<porc<<"%";
    return 0;
}

void proceso (int &A,int &s, int &c){
    s = s + A;
        if (A == 0){
            c = c + 1;
        }
}