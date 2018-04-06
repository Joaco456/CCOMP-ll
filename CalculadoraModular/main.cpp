#include <iostream>
#include <stdio.h>

using namespace std;

void Suma( int A, int B, int C)
{
    int sum = (A+B)%C;

    if(sum<0)
    {
        sum = sum + C;
    }

    cout<<endl;
    cout<<"OPERACION: "<<endl;
    cout<<A<<" + "<<B<<" mod "<<C<<endl;
    cout<<"RESULTADO: "<<endl;
    cout<<sum<<" mod "<<C<<endl;
    cout<<endl;



}


void Resta(int A,int B,int C)
{
    int rest = (A-B)%C;
    if(rest<0)
    {
        rest = rest + C;
    }
    cout<<endl;
    cout<<"OPERACION: "<<endl;
    cout<<A<<" - "<<B<<" mod "<<C<<endl;
    cout<<"RESULTADO: "<<endl;
    cout<<rest<<" mod "<<C<<endl;
    cout<<endl;

}

void multi(int a,int b,int c)
{
    int x = (a*b)%c;
    if(x < 0){
        x = x + c;

    }
    cout<<endl;
    cout<<"OPERACION: "<<endl;
    cout<<a<<" * "<<b<<" mod "<<c<<endl;
    cout<<"RESULTADO: "<<endl;
    cout<<x<<" mod "<<c<<endl;
    cout<<endl;


}
 void inversa(int a, int c)
 {
     for(int i = 0; i<c; i++)
     {
         int x = (a*i)%c;
         if(x<0)
         {
             x = x+c;
         }
         if(x==1)
         {
             cout<<"\n";
             cout<<"Resultado: "<<i<<" mod "<<c<<endl;
             break;
         }
         else if(i == c-1 && x!=1){cout<<"No tiene inverso modular \n";}
     }

 }

int main()
{
    int a,b,c;
    cout<<"Ingrese dos numeros\n"; cin>>a>>b;
    cout<<"Ingrese el modulo\n"; cin>>c;
    Suma(a,b,c);
    Resta(a,b,c);
    multi(a,b,c);
    cout<<endl;
    cout<<"Inversa modular: "<<endl;
    cout<<"Ingrese numero y modulo: \n";cin>>a>>b;
    cout<<"La inversa modular es: \n";
    inversa(a,b);


    return 0;
}
