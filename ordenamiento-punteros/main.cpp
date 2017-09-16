#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
//#include <ctime>

void Quicksort(int *arreglo,int izq, int der)
{
    int i = izq;
    int j = der;
    int pivote = (izq+der/2);
    int aux;

    while(izq <= der){
        while(arreglo[izq]<pivote) i++;
        while(arreglo[der]>pivote) j--;
        if(izq<=der){
            aux = arreglo[izq];
            arreglo[izq] = arreglo[der];
            arreglo[der] = aux;

            i++;
            j--;
        }
    }
    if(izq<der)
        Quicksort(arreglo,izq,j);
    if(i<j)
        Quicksort(arreglo,i,der);
}





using namespace std;

int main()
{

    cout<<"ALGORITMOS DE ORDENAMIENTO CON PUNTEROS"<<endl;

    cout<<endl;

    cout<<"ALGORITMO BURBUJA: "<<endl;

    int arreglo[10]={2,5,4,10,6,7,1,8,9,3};
    int *p;
    p = arreglo;
    int aux;
    for(int i=0;i<10;i++){
        for(int j =0;j<10;j++){
            if(*(p+j)>*(p+j+1)){
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
                }

        }
    }
    cout<<"Orden ascendente: "<<endl;
    for(int i=0; i<10; i++){
        cout<<arreglo[i]<<endl;
    }
    cout<<"-------------------------------------------------"<<endl;

    cout<<"ALGORITMO COCKTAIL-SORT: "<<endl;

    for(int i=0;i<10;i++){
        for(int j =0;j<10;j++){
            if(arreglo[j]>arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
                }
        }
        for(int j =10;j<0; j--){
            if(arreglo[j]<arreglo[j-1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j-1];
                arreglo[j-1] = aux;
            }
        }

    }
    cout<<"Orden ascendente: "<<endl;
    for(int i=0; i<10; i++){
        cout<<arreglo[i]<<endl;
    }
    cout<<"-------------------------------------------------"<<endl;

    cout<<"ALGORITMO INSERSION: "<<endl;
    //condicion insercion: si num(izq) > actual hay cambio

    for(int i =0; i<10; i++){
        int pos = i;
        aux = arreglo[i];

        while((pos>0)&&(arreglo[pos-1]>aux)){
            arreglo[pos] = arreglo[pos-1];
            pos--;
        }
        arreglo[pos]=aux;

    }
    cout<<"Orden ascendente: "<<endl;
    for(int i=0; i<10; i++){
        cout<<arreglo[i]<<endl;
    }

    cout<<"ALGORITMO SELECCION: "<<endl;

    int min;
    for(int i = 0; i<10; i++){
        min = i;
        for(int j = i+1; j<10; j++){
            if(arreglo[j]<arreglo[min]){
                min =j;
            }
        }
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min]= aux;
    }
    cout<<"Orden ascendente: "<<endl;
    for(int i=0; i<10; i++){
        cout<<arreglo[i]<<endl;

    }

    cout<<"-------------------------------------------------"<<endl;

    cout<<"QUICK-SORT: "<<endl;

    cout<<"Orden ascendente: "<<endl;
    for(int i = 0; i<10; i++){
        cout<<arreglo[i]<<endl;
    }





    return 0;
}
