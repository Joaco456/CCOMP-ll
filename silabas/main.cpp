#include <iostream>
#include <stdio.h>

using namespace std;



void Silabas(char *A,char *B)
{

    while(*A)
    {

       *B = *A;
       if(*A=='A'||*A=='E'||*A=='I'||*A=='O'||*A=='U')
       {
           B++;
           *B='-';
           if(*(A+1) == 'M' && (*(A+2) == 'B' || *(A+2) == 'P'))
              {
                  A++;
                  *B=*A;
                  B++;
                  *B='-';
              }
           //if(*(A+1)==)
       }
       B++;
       A++;
    }
    if (*(B-1)=='-')
       B--;
    *B='\0';
}



int main()
{
    char palabra[100];
    char silaba[100];
    cout<<"Ingrese una palabra: "<<endl;
    cin>>palabra;
    Silabas(palabra,silaba);
    cout<<silaba;
    return 0;
}
