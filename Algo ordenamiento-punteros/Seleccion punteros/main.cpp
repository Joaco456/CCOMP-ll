#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n[10] = {4,3,10,5,2,1,8,9,7,6};
    int i,j,aux,min;
    int *p;
    p = n;



    for(i=0;i<10;i++){
        min = i;
        for(j=i+1;j<10;j++){
            if(*(p+j) < *(p+min)){
               min = j;
            }
        }
        aux = *(p+i);
        *(p+i) = *(p+min);
        *(p+min) = aux;
    }


    cout<<"Orden ascendente:  ";
    for(i=0;i<10;i++){
        cout<<*(n+i)<" ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Orden descendente: ";
    for(i=9;i>0-1;i--){
        cout<<*(n+i)<<" ";
    }



    getch();
    return 0;
}
