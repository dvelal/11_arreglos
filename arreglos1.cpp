#include <iostream>
using namespace std;

int main() {
    int n, s, c; 
    cout<<"Ingrese la cantidad de elementos: "; cin>>n;
    int A[n];
    s = 0;
    c = 0;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el elemento "<<i+1<<": "; cin>>A[i];
        s = s + A[i];
        if ( A[i] == 0 )
            c = c + 1;
    }
    float porc = (c*100)/n;
    cout<<"Sumatoria de elementos: "<<s<<endl;
    cout<<"porcentaje de ceros: "<<porc<<"%";
    return 0;
}