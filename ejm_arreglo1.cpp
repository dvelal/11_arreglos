#include <iostream>
using namespace std;
int main () {
    int n, max;
    cout<<" Cantidad de elementos: ";
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese numeros: "<<endl;
        cin>>A[i];
    }
    max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    cout<<"El mayor de todos es: "<<max;
    return 0;
}