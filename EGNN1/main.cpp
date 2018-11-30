#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

class mult
{
public:
	float operator()(float a, float b)
	{
		return a*b;
	}
};




void Gauss(float **m, float *CS, int n)
{
	mult mul;

	for(int pivot=0; pivot<n; pivot++)
	{

		if(pivot == n-1 and (*(*(m+pivot)+pivot)) == 0)
		{
			cout<<"EL SISTEMA NO TIENE SOLUCION"<<endl;
			return;
		}

		float temp;
		if(*(*(m+pivot)+pivot) != 1)
		{
			temp = *(*(m+pivot)+pivot);
			for(int col =0; col<n+1; col++)
				*(*(m+pivot)+col+pivot) = *(*(m+pivot)+col+pivot)/temp;
		}


		for(int fila = pivot + 1; fila<n; fila++)
		{

			if(*(*(m+fila)+pivot) != 0)
			{
				//3  1 1 1 6 2 -1  1 5 3 1 -2 9
				temp = -*(*(m+fila)+pivot);
				for(int col =0; col<n+1; col++)
				{
					*(*(m+fila)+col+pivot) = (mul(temp ,*(*(m+pivot)+col+pivot)))+ *(*(m+fila)+col+pivot);
					//cout<<*(*(m+fila)+col+pivot)<<endl;

				}
			}

		}

	}


	/*if(*(*(m+2)) != 0)
	{
	temp = -*(*(m+2));
	for(int j =0; j<n+1; j++)
	*(*(m+2)+j) = (mult(temp, *(*(m)+j)))+ *(*(m+2)+j);
	}

	if(*(*(m+1)+1) != 1)
	{
	temp = *(*(m+1)+1);
	for(int j =0; j<n+1; j++)
	*(*(m+1)+j) = *(*(m+1)+j)/temp;
	}

	if(*(*(m+2)+1) != 0)
	{
	temp = -*(*(m+2)+1);
	for(int j =1; j<n+1; j++)
	*(*(m+2)+j) = (mult(temp, *(*(m+1)+j)))+ *(*(m+2)+j);;
	}*/



	/*if(*(*(m+2)+2) != 1)
	{
	temp = *(*(m+2)+2);
	for(int j =2; j<n+1; j++)
	*(*(m+2)+j) = *(*(m+2)+j)/temp;

	if(*(*(m+2)+3) == -0)
	{
	*(*(m+2)+3) = 0;
	}
	}*/
    //3  1 1 1 6 2 -1  1 5 3 1 -2 9
    //3 1 2 -1 3 2 -1 -1 4 -1 3 2 -5

    *(CS+n-1)=*(*(m+n-1)+n)/(*(*(m+n-1)+n-1));

    for(int i=n-2;i>=0;i--)
    {
//        float t,r;
        *(CS+i)=*(*(m+i)+n);//el ultimo
        //r=1;
        for(int j=n-1;j>i;j--)
        {
            //cout<<"\nrctmr: "<<-*(*(m+i)+j)<<" * "<<(*(CS+j))<<endl;
            float t = -*(*(m+i)+j)*(*(CS+j));
            //cout<<"CS: "<<*(CS+i)<<endl;
            //cout<<"t: "<<t<<" i: "<<i<<" j: "<<j<<endl;
            //t*=*(CS+i-1);
            //    cout<<"i: "<<i<<" j: "<<j<<" mul: "<<*(CS+i-1)<<endl<<endl;
            *(CS+i)+=t;
        }
        cout<<endl;

//        *(CS+i)=t;
        *(CS+i)/=*(*(m+i)+i);
        //cout<<"Resultado: "<<*(CS+i)<<endl;
    }
    /*cout<<"\ncsmr\n";
    for(int i=0;i<n;i++)
    {
        cout<<*(CS+i)<<" ";
    }
    cout<<endl;*/
	/*z = *(*(m+2)+3)/ *(*(m+2)+2);
	cout<<"y"<<endl;
	cout<<*(*(m+1)+3)<<"-"<<*(*(m+1)+2)<<"*"<<z<<"/"<<*(*(m+1)+1)<<endl;
	y = (*(*(m+1)+3)-(*(*(m+1)+2)*z))/ *(*(m+1)+1);
	x = (*(*m+3) - *(*m+2)*z- *(*m+1)*y)/ **m;*/

	cout<<endl<<"EL CONJUNTO SOLUCION ES:  ";//<<"{"<<x<<","<<y<<","<<z<<"}"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(CS+i)<<",";
    }
}


int main()
{
	cout<<" ************ELIMINACION GAUSSEANA************** ";
	cout<<"\n";
	cout<<"\n";

	int n;
	cout<<"Escriba el numero de filas: ";cin>>n;

	float **matrix = new float*[n];
	for(int i = 0; i<n; i++)
	{
		*(matrix+i) = new float[n+1];
	}
	float *CS = new float[n];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n+1; j++)
		{
			cout<<"Digite numero segun posicion ["<<i<<"]["<<j<<"]: ";cin>>matrix[i][j];
		}
	}

	cout<<"\n";
	cout<<"\n";

	cout<<"   MATRIZ: "<<endl;
	cout<<"\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n+1; j++)
		{
			cout<<"|"<<matrix[i][j]<<"|";
		}
		cout<<"\n";
	}

	cout<<"\n";

	Gauss(matrix,CS,n);

	cout<<"\n";
	cout<<"\n";

	cout<<"   MATRIZ DIFERENTE: "<<endl;
	cout<<"\n";
	for(int i=0; i<n; i++)
	{

		for(int j=0; j<n+1; j++)
		{
			cout<<"|"<<matrix[i][j]<<"|";
		}
		cout<<"\n";
	}

	return 0;
}

