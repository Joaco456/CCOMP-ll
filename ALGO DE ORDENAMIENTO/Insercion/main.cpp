#include <iostream>
#include <conio.h>

using namespace std;

//ORDENAMIENTO POR INSERCION
int main()
{
    int n[5] = {5,3,4,1,2};
    int i,pos,aux;

    for(i=0;i<5;i++){
        pos = i;//guarda la posicion
        aux = n[i];//guarda el numero como tal

        while((pos>0) && (n[pos-1] > aux)){// si numero  izquierdo > numero actual entonces CAMBIO
            n[pos] = n[pos-1];
            pos--;
        }
        n[pos] = aux;//refresca cada iteracion del bucle
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
