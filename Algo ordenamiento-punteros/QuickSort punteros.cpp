#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

using namespace std;

void QuickSort(int* arr, int izq, int der)
{
    int i = izq, j = der, temp;
     //alamcena la posicion central del arreglo como pivote
    int *p;
    p = arr;
    int pivote = *(p+((i+j)/2));                                                     //(*(p+i+j)/2);

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
            QuickSort(arr,izq,j);
        if(i < der)
                QuickSort(arr,i,der);

}


//ALGORTMO QUICK SORT
int main()
{
    int arr[10]= {6,7,3,2,1,4,5,10,9,8};


    QuickSort(arr,0,9);

    cout<<"Orden ascendente: "<< endl;
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<endl;
    }

    cout<<endl;
    cout<<endl;

    cout<<"Orden descendente: "<< endl;
    for(int i = 9; i>0-1; i--){
        cout<<arr[i]<<endl;
    }






    system("pause");
    return 0;
}

