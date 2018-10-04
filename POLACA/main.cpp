#include <iostream>

using namespace std;



bool signo(char *A)
{
    return (*A=='('||*A=='+'||*A=='-'||*A=='*'||*A=='/'||*A==')');
}

int operacion(int a, int b, char c)
{

    if(c == '+')
        return a+b;
    if(c == '-')
        return a-b;
    if(c == '*')
        return a*b;
    if(c == '/')
        return a/b;

}


int main()
{
    char ope[100];
    int numeros[100];
    char signos[100];
    char Pila[100];
    int i = -1;
    int j = 0;
    cout<<"Ecuacion: "; cin>>ope;
    cout<<"\n";
    char *p = ope;
    while(*p)
    {
        if(signo(p))
        {

           i++;
           *(signos+i)=*p;
           if(*p == ')')
           {
               i--;
               while(*(signos+i) != '(')
               {
                   *(Pila+j) = *(signos+i);
                   j++;
                   i--;
               }
           }
           p++;
           continue;
        }
        *(Pila+j) = *p;
        j++;

        p++;
    }
    while(i!=-1)                 //SI AUN QUEDAN COSAS EN EL ARRAY SIGNOS
    {
        if(*(signos+i)!='(')
        {
            *(Pila+j) = *(signos+i);
            j++;
        }
        i--;
    }
    cout<<"Notacion Polaca: "<<endl;
    for(int x = 0; x<j; x++)
    {

        cout<<*(Pila+x)<<" ";

    }

    p = Pila;
    while(*p)
    {
        if(!signo(p))
        {
            i++;
            *(numeros+i) = int(*p)-48;
        }
        else{

            *(numeros+i-1) = operacion(*(numeros+i-1),*(numeros+i),*p);
            i--;
        }
        p++;

    }
    cout<<"\n";
    cout<<endl<<"Rpta: "<<*(numeros+i);
    cout<<"\n";



    return 0;
}
