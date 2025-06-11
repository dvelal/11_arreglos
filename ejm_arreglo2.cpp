#include <iostream>
using namespace std;
int main () {
    int n, s;
    cout<<" Cantidad de elementos: ";
    cin>>n;
    int A[n];//para usar la menor cantidad de memoria posible
    s = 0;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese numero: ";
        cin>>A[i];
        s = s + A[i];
    }
    int prom = s / n;
    cout<<" Los numero mayores al promedio son: "<<endl;
    for (int i = 0; i < n; i++) {
        if (A[i] > prom)
            cout<<A[i]<<endl;
    }
    return 0;
}