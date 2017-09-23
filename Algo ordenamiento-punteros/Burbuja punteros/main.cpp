#include <iostream>
#include <conio.h>

using namespace std;



//METODO BURBUJA
int main()
{
    int numeros[10] = {4,1,2,3,5,10,9,6,7,8};
    int i,j,aux;
    int *p;
    p = numeros;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(*(p+j)>*(p+j+1)){
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
            }
        }
    }
    cout<<"Orden ascendente: ";
    for(i=0;i<10;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
      cout<<endl;

    cout<<"Orden descendente: ";
    for(i=9;i>0-1;i--){
        cout<<*(p+i)<<" ";
    }








    getch();
    return 0;
}
