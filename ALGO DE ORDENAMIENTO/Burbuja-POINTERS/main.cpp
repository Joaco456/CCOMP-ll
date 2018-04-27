#include <iostream>
#include <stdio.h>

using namespace std;

void cambio(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void Burbuja(int *A, int n)
{

    bool a = true;
    while(a)
    {
        a = false;
        for(int *p = A;p<A+n-1;p++)
        {
            if(*p > *(p+1))
            {
                cambio(p ,(p+1));
                a = true;
            }
        }
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
    Burbuja(A,n);

    cout<<"Orden acendente: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }



    return 0;
}
