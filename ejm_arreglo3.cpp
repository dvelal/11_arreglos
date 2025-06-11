#include <iostream>
using namespace std;
int main () {
    int n, aux;
    cout<<" Cantidad de elementos: ";
    cin>>n;
    int A[n];//para usar la menor cantidad de memoria posible
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese numero: ";
        cin>>A[i];
    }
    for (int i = 0; i < n/2; i++){
        aux = A[i];
        A[i] = A[n-i-1];
        A[n-i-1] = aux;
    }
    cout<<" Arreglo cambiado"<<endl;
    for (int i = 0; i < n; i++)
        cout<<A[i]<<endl;
    return 0;
}