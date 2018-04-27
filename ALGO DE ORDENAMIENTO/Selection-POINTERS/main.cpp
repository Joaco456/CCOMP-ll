#include <iostream>
#include <stdio.h>

using namespace std;

void cambio(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void Selection(int *A,int n){
    for(int *p=A;p<A+n;p++){
        int *menor=p;
        for(int *t=p+1;t<A+n;t++){
            if(*menor>*t){
                menor=t;
            }
        }
        cambio(*p,*menor);
    }
}

int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros: ";cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Posicion "<<i<<" = ";
        cin>>A[i];
    }

    Selection(A,n);

    cout<<"Orden acendente: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }


    return 0;
}

