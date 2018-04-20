#include <iostream>
#include <stdio.h>

using namespace std;

void Selection(int *A, int n)
{
    int aux,menor;
    int i=0;
    bool b = true;
    while(b)
    {
        b = false;
        menor = i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j]<A[menor])
            {
                menor = j;
            }
            b = true;

        }
        aux = A[i];
        A[i] = A[menor];
        A[menor] = aux;

        i++;
    }
}

int main()
{
    int n;
    int aux,j,i;
    cout<<"Ingrese la cantidad de numeros: ";cin>>n;
    int A[n];
    for(i=0;i<n;i++)
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
