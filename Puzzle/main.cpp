#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<stdio.h>


using namespace std;



void ImprimirTabla()
{
    int i =0,j;
    while(i<4)
    {
        j=0;
        while(j<4)
        {
           // printf("[%2i]",tabla[i][j]);
            j++;
        }
        cout<<"\n";
        i++;
    }
}

int main()
{
    cout<<"\n";
    cout<<"             PUZZLE           "<<endl;
    cout<<"\n";
    int i=0,j=0,contador=1;
    char caracter,enter;
    int (*tabla)[4];
    int x = 3, y = 3;
    while(i<4)
    {
        j=0;
        while(j<4)
        {
            tabla[i][j] = contador;
            printf("[%2i]",tabla[i][j]);
            j++;
            contador++;
        }
        cout<<"\n";
        i++;
    }
    tabla[3][3] = 0;
    ImprimirTabla();
    do
    {
        caracter = getchar();
        enter = getchar();
        switch(caracter)
        {
            case 'w':
                if(y<=2)
                {

                }
                else{
                    cout<<"Fuera del limite"<<endl;
                }
            break;
            case 's':
                if(y>=1)
                {

                }
                else{
                    cout<<"Fuera del limite"<<endl;
                }
            break;
            case 'a':
                if(x<=2)
                {

                }
                else{
                    cout<<"Fuera del limite"<<endl;
                }
            break;
            case 'd':
                if(x>=1)
                {

                }
                else{
                    cout<<"Fuera del limite"<<endl;
                }
            break;
            case '0':
            break;
            default:
                cout<<"Caracter invalido"<<endl;
        }

    }while(caracter != '0');



    return 0;
}
