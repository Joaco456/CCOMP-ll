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
        *(arr+i)=rand()%1000000;
    }
}
void cambio(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

template<class T>
class asc
{
public:
    bool operator()(T a, T b)
    {
        return a>b;
    }
};

template<class T>
class des
{
public:
    bool operator()(T a, T b)
    {
        return a<b;
    }
};
template<class T>
void Selection(int *A,int n,T functor){
    for(int *p=A;p<A+n;p++){
        int *menor=p;
        for(int *t=p+1;t<A+n;t++){
            if(functor(*menor,*t)){
                menor=t;
            }
        }
        cambio(*p,*menor);
    }
}


int main()
{
    clock_t inicio;
    float duracion;

    srand(time(NULL));
    int tam=1000000;
    //cout<<"Indique tamanio del arreglo: ";cin>>tam;
    cout<<"\n";
    cout<<"Tamanio: "<<tam<<endl;
    int *arr = NULL;
    arr = new int [tam];
    generadorNumeros(arr,tam);
    cout<<" --------FUNCTOR-------------"<<endl;

    inicio=clock();

    asc<int> AZ;
    des<int> DZ;
    Selection(arr,tam,AZ);
    for(int *p=arr;p<arr+tam;p++)
    {
        cout<<*p<<endl;
    }
    cout<<"\n";
    duracion=(clock()-inicio)/ (float) CLOCKS_PER_SEC;
    cout<<" Tiempo :"<<duracion<<endl;
    cout<<"-------------------------------------"<<endl;

    return 0;
}
