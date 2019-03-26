#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <class T>
void generadorNumeros (T *arr, T tam)
{
    for (int i=0; i<tam; i++)
    {
        *(arr+i)=rand()%1000;
    }
}

bool asc(int a,int b)
{
    return a>b;
}
bool des(int a, int b)
{
    return a<b;
}
int cambio(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void Burbuja(int *Arr, int n, bool(*ptr)(int,int))
{
    bool a = true;
    while(a)
    {
        a = false;
        for(int *p=Arr; p<Arr+n; p++)
        {
            if(ptr(*p,*(p+1)))
            {
                cambio(p,p+1);
                a = true;
            }
        }
    }
}


int main()
{
    clock_t inicio;
    float duracion;

    srand(time(NULL));
    int tam;
    cout<<"Indique tamanio del arreglo: ";cin>>tam;
    cout<<"\n";
    cout<<"Tamanio: "<<tam<<endl;
    int *arr = NULL;
    arr = new int [tam];
    generadorNumeros(arr,tam);
    cout<<" --------PUNTERO-FUNCION-------------"<<endl;

    inicio=clock();
    Burbuja(arr,tam, asc);
    duracion=(clock()-inicio)/ (float) CLOCKS_PER_SEC;
    for(int *p=arr;p<arr+tam;p++)
    {
        cout<<*p<<endl;
    }
    cout<<"\n";
    duracion=(clock()-inicio)/ (float) CLOCKS_PER_SEC;
    cout<<" Tiempo :"<<duracion<<endl;
    cout<<"-------------------------------------"<<endl;

    /*int n;
    int i;
    cout<<"Ingrese la cantidad de numeros: ";cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cout<<"Posicion "<<i<<" = ";
        cin>>A[i];
    }

    cout<<"\n";
    Burbuja(A,n,asc);

    cout<<"Orden : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" "<<endl;
    }*/
    return 0;
}
