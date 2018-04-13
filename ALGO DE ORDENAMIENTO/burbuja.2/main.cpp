#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese la cantidad de numeros: ";cin>>n;
    int aux,j,i;
    int A[n];
    int *p = &A[n];
    for(i=0;i<n;i++)
    {
        cout<<"Posicion "<<i<<" =";
        cin>>A[i];
    }
    i=0;
    while(i<n)
    {
        for(j=0 ;j<n;j++)
        {
            if(A[j]>A[j+1])
            {
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;

            }

        }
        i++;

    }
    cout<<"Orden acendente: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
    cout<<"Orden descendente: "<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" " <<endl;
    }

    return 0;
}
