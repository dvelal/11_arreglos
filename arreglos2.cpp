#include <iostream>
using namespace std;

int main() {
    int n, imp, par;
    cout<<"ingrese numero de elementos: "; cin>>n;
    int A[n];
    imp = 0; 
    par = 0;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el elemento "<<i+1<<": "; cin>>A[i];
        if ( A[i]%2 != 0 )
            imp = imp + 1;
        else 
            par = par + 1;
    }
    int I[imp], P[par];
    int j = 0;
    int k = 0;
    for (int i = 0; i < n; i++) {
        if ( A[i]%2 != 0 ) {
            I[j] = A[i];
            j = j + 1;
        }
        else {
            P[k] = A[i];
            k = k + 1;
        }
    }
    cout<<"Arreglo completo: ";
    for (int i = 0; i < n; i++) {
        cout<<A[i]<<" ";
    }
    cout<<" Arreglo de numeros pares: ";
    for (int i = 0; i < par; i++) {
        cout<<P[i]<<" ";
    }
    cout<<" Arreglo de numeros impares: ";
    for (int i = 0; i < imp; i++) {
        cout<<I[i]<<" ";
    }
    return 0;
}