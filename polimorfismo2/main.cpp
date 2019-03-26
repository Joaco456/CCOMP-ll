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
int cambio(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

template<class T>
class Bubble
{
public:
    virtual bool orden(T a, T b)=0;
    void Burbuja(int *Arr, int n, Bubble *Espuma)
    {
        bool a = true;
        while(a)
        {
            a = false;
            for(int *p=Arr; p<Arr+n-1; p++)
            {
                if(Espuma->orden(*p,*(p+1)))
                {
                    cambio(p,p+1);
                    a = true;
                }
            }
        }
    }
};

template<class T>
class asc:public Bubble<T>
{
    inline bool orden(T a, T b)
    {
        return a>b;
    }
};

template<class T>
class des:public Bubble<T>
{
    inline bool orden(T a, T b)
    {
        return a<b;
    }
};



int main()
{
    clock_t inicio;
    float duracion;

    srand(time(NULL));
    int tam=20;
    cout<<"Tamanho: "<<tam<<endl;
    int *arr = NULL;
    arr = new int [tam];
    generadorNumeros(arr,tam);
    cout<<"---------POLIMORFISMO----------------"<<endl;

    asc<int> A;
    des<int> D;
    Bubble<int> *bur ;
    Bubble<int> *bur2;
    Bubble<int> *ptr = &A ;
    Bubble<int> *ptr2 = &D;
    inicio=clock();


    bur->Burbuja(arr,tam,ptr);

    for(int *p=arr;p<arr+tam;p++)
    {
        cout<<*p<<endl;
    }
    cout<<"\n";

    duracion=(clock()-inicio)/(float) CLOCKS_PER_SEC;
    cout<<" Tiempo : "<<duracion<<endl;
    cout<<"-------------------------------------"<<endl;


    return 0;
}
