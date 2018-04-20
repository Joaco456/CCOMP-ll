#include <iostream>
#include <stdio.h>

using namespace std;


void Burbuja(int *A,int n)
{

    bool a = true;
    int aux;
    while(a)
    {
        a = false;
        for(int j=0;j<n;j++)
        {
            if(A[j]>A[j+1])
            {
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
                a = true;
            }
        }
        a = false;
        for(int j=n;j>0;j--)
        {
            if(A[j]<A[j-1])
            {
                aux = A[j];
                A[j] = A[j-1];
                A[j-1] = aux;
                a = true;
            }
        }
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

    Burbuja(A,n);

    cout<<"Orden acendente: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
    /*cout<<"Orden descendente: "<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" " <<endl;
    }
    */

    return 0;
}












