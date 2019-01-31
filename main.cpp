#include <iostream>
#include <math.h>
using namespace std;

int Modulo(int a, int mod)
{
    if(a<mod)
        return a;
    if(a<1)
        a = mod+a;
    return a%mod;

}


int inversaMod(int a, int m){
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
    if (m == 1)
      return 0;
    while (a > 1){
        q = a / m;
        t = m;
        m = Modulo(a, m), a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
       x1 += m0;
    return x1;
}




void Resto_Chino(int &k, int *A, int *n_k)
{
    int N = 1,i;
    int *p;
    cout<<"Ingrese la cantidad de ecuaciones del sistema: ";cin>>k;
    cout<<"\n";
    for(p=A; p<A+k; p++)
    {
        cout<<"Ingrese el conjunto de A_k: ";cin>>*p;
    }
    cout<<"\n";
    cout<<"\n";
    for(i = 0; i<k; i++)
    {
        cout<<"Ingrese el conjunto de n_k: ";cin>>n_k[i];
        N *= n_k[i];

    }
    cout<<"\n";
    cout<<"N es igual a: "<<N<<endl;
    cout<<"\n";
    int C[k];
    for( i=0; i<k; i++)
    {
        C[i] = N/n_k[i];
        cout<<"C"<<i<<" = "<<C[i]<<endl;
    }
    cout<<"\n";
    int D[k];
    for(i = 0; i<k;i++)
        cout<<C[i]<<" "<<"D"<<i<<"="<<1<<" mod "<<n_k[i]<<endl;

    cout<<"\n";
    for(i = 0; i<k;i++)
        cout<<Modulo(C[i],n_k[i])<<" "<<"D"<<i<<"="<<1<<" mod "<<n_k[i]<<endl;
    cout<<"\n";
    for(i = 0; i<k;i++)
    {
        int aux =Modulo(C[i],n_k[i]);
        D[i] = inversaMod(aux,n_k[i]);
        cout<<D[i]<<" mod "<<n_k[i]<<endl;
    }
    int x_0 = 0;
    for(i = 0; i<k;i++)
    {

    }







}







int main()
{
    int k=0;
    int A[k];
    int n[k];
    Resto_Chino(k,A,n);




    return 0;
}
