#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

using namespace std;

void Imprimir(int arreglo[][4])
{
    for(int i=0;i<4;i++)
    {
            for(int j=0;j<4;j++)
            {
                if(arreglo[i][j] != 0)
                {
                    printf("   [%2i]",arreglo[i][j]);
                }
                else{
                    printf("   [  ]");
                }

            }
            cout<<endl;
    }
}
void Cambio(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int Arrows[]={72,80,75,77,80,77,75,80,72,72,80,77,75};
    int sorted[4][4];
    int arreglo[4][4]={ {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15}};

    memcpy(sorted,arreglo,sizeof(arreglo));

    int *first=*arreglo;
    int *last=*(arreglo+3)+3;
    int (*p)[4];
    int *s;
    p=&arreglo[3];
    s=*p+3;
    int *B=*p;
    while(true)
    {

        system("cls");
        cout<<"            "<<"PUZZLE"<<endl;
        cout<<"\n";
        Imprimir(arreglo);
        //cout<<endl<<**p<<" "<<*s<<endl;
        int c=0;
        int repeat=1;

        c=getch();
        while(repeat>0)
        {

            int random=rand() % 13;
            (repeat>1)?c=Arrows[random]:c=c;


            switch(c)
            {
                int temp;
                case 72:
                {

                    if(*(p-1)<last and *(p-1)>=first)
                    {
                        Cambio((s-4),s);
                        p--;
                        s=*p+(s-B);

                        B=*p;

                    }
                    break;
                }
                case 80:
                {

                    if(*(p+1)<last and *(p+1)>first)
                    {

                        Cambio((s+4),s);
                        p++;
                        s=*p+(s-B);
                        B=*p;
                    }
                    break;
                }
                case 75:
                {


                    if(s-1>=*p)
                    {

                        Cambio((s-1),s);
                        s--;
                    }
                    break;
                }
                case 77:
                {

                    if(s+1<*(p+1))
                    {

                        Cambio((s+1),s);
                        s++;

                    }
                    break;
                }
                case 13:
                {
                    memcpy(arreglo,sorted,sizeof(sorted));
                    repeat=5000;
                    p=arreglo+3;
                    B=*p;
                    s=*p+3;
                    break;
                }
                case 27:
                {
                    return 0;
                }
            }
            repeat--;
        }
    }

    return 0;
}
