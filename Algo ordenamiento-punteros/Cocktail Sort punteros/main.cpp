#include <iostream>

using namespace std;

int main()
{
    int arreglo[10]= {10,7,6,5,4,2,3,1,9,8};
    int aux,i,j;
    int *p;
    p = arreglo;

    for(int i = 0; i<10; i++){
        for(int j =0; j<10; j++){
            if(*(p+j)>*(p+j+1)){       //primera condicion j > j+1
                aux = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = aux;
            }
        }

        for(int j =9; j>0; j--){
            if(*(p+j)<*(p+j-1)){       //segunda condicion j < j-1
                aux = *(p+j);
                *(p+j) = *(p+j-1);
                *(p+j-1)= aux;
            }
        }
    }

cout<<"Orden ascendente: "<<endl;
for(i = 0; i<10; i++){
    cout<<*(arreglo+i)<<endl;
}
cout<<endl;
cout<<endl;
cout<<"Orden descendente: "<<endl;
for(i = 9; i>0-1; i--){
    cout<<*(arreglo+i)<<endl;
}

    return 0;
}
