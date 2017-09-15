#include <iostream>
#include <stdio.h>

using namespace std;

void multi(int a,int b,int c)
{
    int x = (a*b)%c;
    while(x > c){
        x = x%c;
    }
    if(x < 0){
        x = x + c;

    }
    cout<<a<<" * "<<b<<" mod "<<c<<endl;
    cout<<x<<" mod "<<c<<endl;

}
void inverso(int a,int c)
{
    for(int b = 0;b < c;b++){
        int x = (a*b)%c;
        if(x < 0){
            x = x + c;
        }
        if(x == 1){
            cout<<"\n";
            cout<<"Resultado: "<<b<<endl;
            break;
        }
        if(b == c-1 && x != 1){cout<<"No existe inverso modular \n";}
    }
}
  int Exponente()
    {
        long long r = 1;
        long long _b=b;
        long long y = a;
        int mod=ex;
        while (_b > 0)
        {
            if ((_b&1)==1)
                r = (r * y)% mod;
            _b>>=1;
            y=((y%mod)*(y%mod))%mod;
        }
        cout<<"modulo: "<<mod<<endl
            <<"base: "<<a<<endl
            <<"exponente: "<<b<<endl
            <<"resultado: "<<r<<endl<<endl;
        return r;
    }
};





int main()
{
    int a,b,c;
    cout<<"Ingrese dos numeros\n"; cin>>a>>b;
    cout<<"Ingrese el modulo\n"; cin>>c;
    multi(a,b,c);
    return 0;
}
