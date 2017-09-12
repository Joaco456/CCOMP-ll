#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

void QuickSort(int* arr, int izq, int der)
{
    int i = izq, j = der, temp;
    int pivote = arr[(i+j)/2];  //alamcena la posicion central del arreglo como pivote

    while(i<=j){
        while(arr[i]<pivote) i++;
        while(arr[j]>pivote) j--;
        if(i <= j){                //cuando i y j llegan a la misma posicion despues de n iteraciones
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if(izq < j)
            QuickSort(arr,izq,j);
        if(i < der)
                QuickSort(arr,i,der);

}


//ALGORTMO QUICK SORT
int main()
{
    int arreglo[10] = {1,3,2,5,4,8,6,9,6,10};
    cout<<"Orden ascendente: "<<endl;
    for(int i = 0; i<10; i++){
        cout<<arreglo[i]<<endl;
    }


    system("pause");
    return 0;
}
