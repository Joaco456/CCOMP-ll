#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n[5] = {4,3,1,5,2};
    int i,j,aux,min;

    for(i=0;i<5;i++){
        min = i;
        for(j=i+1;j<5;j++){
            if(n[j]-n[min]){
               min = j;
            }
        }
        aux = n[i];
        n[i] = n[min];
        n[min] = aux;
    }


    cout<<"Orden ascendente: ";
    for(i=0;i<5;i++){
        cout<<n[i]<<" ";
    }
    cout<<endl;

    cout<<"Orden descendente: ";
    for(i=4;i>0;i--){
        cout<<n[i]<<" ";
    }



    getch();
    return 0;
}
