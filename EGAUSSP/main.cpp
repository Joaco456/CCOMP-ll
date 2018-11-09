#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

/*void Fraccion(float num)
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
}*/

float mult(float a, float b)
{
    return a*b;
}

void Gauss(float (*m)[4], float *CS)
{

        float temp;
        if(*(*m) != 1)
        {
            temp = *(*m);
            for(int j =0; j<4; j++)
                *(*(m)+j) = *(*(m)+j)/temp;
        }

        if(*(*(m+1)) != 0)
        {
            temp = -*(*(m+1));
            for(int j =0; j<4; j++)
                *(*(m+1)+j) = (mult(temp ,*(*(m)+j)))+ *(*(m+1)+j);
        }

        if(*(*(m+2)) != 0)
        {
            temp = -*(*(m+2));
            for(int j =0; j<4; j++)
                *(*(m+2)+j) = (mult(temp, *(*(m)+j)))+ *(*(m+2)+j);
        }

        if(*(*(m+1)+1) != 1)
        {
            temp = *(*(m+1)+1);
            for(int j =0; j<4; j++)
               *(*(m+1)+j) = *(*(m+1)+j)/temp;
        }

        if(*(*(m+2)+1) != 0)
        {
            temp = -*(*(m+2)+1);
            for(int j =1; j<4; j++)
                *(*(m+2)+j) = (mult(temp, *(*(m+1)+j)))+ *(*(m+2)+j);;
        }

        if(*(*(m+2)+2) == 0)
        {
            cout<<"EL SISTEMA NO TIENE SOLUCION"<<endl;
            return;
        }

        if(*(*(m+2)+2) != 1)
        {
            temp = *(*(m+2)+2);
            for(int j =2; j<4; j++)
                *(*(m+2)+j) = *(*(m+2)+j)/temp;

                if(*(*(m+2)+3) == -0)
                {
                    *(*(m+2)+3) = 0;
                }
        }

        float x = *CS ;
        float y = *(CS+1);
        float z = *(CS+2) ;

        z = *(*(m+2)+3)/ *(*(m+2)+2);
        y = (*(*(m+1)+3)-(*(*(m+1)+2)*z))/ *(*(m+1)+1);
        x = (*(*m+3) - *(*m+2)*z- *(*m+1)*y)/ **m;

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
