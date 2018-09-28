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
