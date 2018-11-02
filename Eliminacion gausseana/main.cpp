#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void Fraccion(float num)
{
    float a=1,b=1;
    float aux=1;
    while(!(aux == num))
    {
        aux = a/b;
        if(aux < num)
            a++;
        else if(aux > num)
        {
            a--;
            b++;
        }
    }


}

void Gauss(float (*m)[4], float *CS)
{

for(int i=0; i<3; i++)
{
    float a = m[0][0];
    float k = m[0][3];
    float b = m[1][0];
    float c = m[1][1];
    float d = m[1][2];
    float t = m[1][3];
    float e = m[2][0];
    float f = m[2][1];
    float g = m[2][2];
    //float h = m[2][3];
    for(int j = 0; j<4; j++)
    {
        if(a != 1)
        {
            m[0][j] = m[0][j]/a;
        }

        if(b != 0)
        {
            m[1][j] = (((-1*b)*m[0][j])+m[1][j]);
        }

        if(e != 0)
        {
            m[2][j] = (((-1*e)*m[0][j])+m[2][j]);
        }

        if(c != 1)
        {
            m[1][j] = m[1][j]/c;

        }
        if(f != 0)
        {
            m[2][j] = (((-1*f)*m[1][j])+m[2][j]);
        }

        if(g != 1)
        {
            m[2][j] = m[2][j]/g;

        }


    }



}

int a = m[0][3];
int b = m[1][2];
int c = m[1][3];
int d = m[2][3];

int x = *CS ;
int y = *(CS+1);
int z = *(CS+2) ;

z = d;
y = c - (b*z);
x = a - (y+z);


cout<<"EL CONJUNTO SOLUCION ES:  "<<"{"<<x<<","<<y<<","<<z<<"}"<<endl;



}


int main()
{
    float matrix[3][4];
    float CS[3];

    cout<<" ************ELIMINACION GAUSSEANA************** ";
    cout<<"\n";
    cout<<"\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {

            cout<<"Digite numero segun posicion ["<<i<<"]["<<j<<"]: ";cin>>matrix[i][j];
        }
    }

    cout<<"\n";
    cout<<"\n";

    cout<<"   MATRIZ: "<<endl;
    cout<<"\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {

            cout<<"|"<<matrix[i][j]<<"|";
        }
        cout<<"\n";
    }
    //GAUSS();
    cout<<"\n";
    Gauss(matrix,CS);
    cout<<"\n";
    cout<<"\n";

    cout<<"   MATRIZ DIFERENTE: "<<endl;
    cout<<"\n";
    for(int i=0; i<3; i++)
    {

        for(int j=0; j<4; j++)
        {
            cout<<"|"<<matrix[i][j]<<"|";
        }
        cout<<"\n";
    }


    return 0;
}
