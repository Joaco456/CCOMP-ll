
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

void QuickSort(int *arr, int izq, int der)
{
    int i = izq, j = der, temp;
    int *p;
    p = arr;
    int pivote = *(p+i+j/2);//alamcena la posicion central del arreglo como pivote

    while(i<=j){
        while(*(p+i)<pivote) i++;
        while(*(p+j)>pivote) j--;
        if(i <= j){                //cuando i y j llegan a la misma posicion despues de n iteraciones
            temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;
            i++;
            j--;
        }
    }
    if(izq < j)
            QuickSort(p,izq,j);
        if(i < der)
                QuickSort(p,i,der);

}


//ALGORTMO QUICK SORT
int main()
{
    int arreglo[10] = {1,3,4,5,10,9,2,7,8,6};
    int *p = arreglo;

    cout<<"Orden ascendente: "<<endl;
    for(int i = 0; i<10; i++){
        cout<<*(p+i)<<endl;
    }
    cout<<endl;

    cout<<"Orden descendente: "<<endl;
    for(int i = 9; i<0-1; i--){
        cout<<*(p+i)<<endl;
    }



    return 0;
}
