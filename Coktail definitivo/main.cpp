#include <iostream>
#include <stdio.h>

using namespace std;


void Swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

bool acen(int a, int b)
{
    return a>b;
}

bool des(int a, int b)
{
    return a<b;
}

void CoktailSort(int *Array, int tam, bool(*ptr)(int,int))
{

    bool a = true;
    while(a)
    {
        a = false;
        for(int *p = Array; p<Array+tam-1; p++)
        {
            if(ptr(*p,*(p+1)))
            {
                Swap(p,p+1);
                a = true;
            }
        }
        a = false;
        for(int *p = Array+tam-1; p>Array; p--)
        {

            if(*p>*(p-1))
            {
                Swap(p,p-1);
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

    cout<<"\n";
    CoktailSort(A,n,acen);

    cout<<"Orden : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }




    return 0;
}
