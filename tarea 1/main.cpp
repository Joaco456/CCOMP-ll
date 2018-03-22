#include <iostream>

using namespace std;

int Lechero( int &s, int &c, int &t, int &u)
{
    int litros;
do{
    cout<<"Ingrese el numero de litros que desea: ";cin>>litros;
    s = litros/7;
    if(litros%7 == 0)
        return 0;
    else{
        litros = litros%7;
        c = litros/5;
        if(litros&5 == 0)
            return  0;
        else{
            litros = litros%5;
            t = litros/3;
            if(litros%3 == 0)
                return 0;
            else{
                u = litros;
                return 0;
            }
        }

    }

}while((litros>0)||(litros<1000));

}
int main()
{
int a=0,b=0,c=0,d=0;
Lechero(a,b,c,d);
cout<<a<<" botellas de 7"<<endl;
cout<<b<<" botellas de 5"<<endl,
cout<<c<<" botellas de 3"<<endl;
cout<<d<<" botellas de 1"<<endl;

    return 0;
}
