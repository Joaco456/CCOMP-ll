#include <iostream>
#include <conio.h>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

int dias[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    long long int segundos;
    long long int minutos, horas;
    float semanas,anios, meses;

    int FechaJuliana(int Y, int M, int D)
    {
	int M1 = (M-14)/12;
	int Y1 = Y + 4800;
	return (1461*(Y1+M1)/4 + 367*(M-2-12*M1)/12 - (3*((Y1+M1+100)/100))/4 + D - 32075);
    }

int main()
{
    int dia1, dia2, mes1, mes2, anio1,anio2;
	cout<<"FECHA INICIAL: \n";
	cout<<"-Anio: "; cin >> anio1;
	cout<<"-Mes: "; cin >> mes1;

	//Comprobar Mes
	while(mes1<1 or mes1>12)
	{
		cout<<"Ingrese el mes correcto\n";
		cin>>mes1;
	}
	cout<<"-Dia: ";
	cin >> dia1;

	//Comprobar Dia
	int bisciesto=28;
	if( anio1%4==0 and (anio1%100!=0 or anio1%400==0))
        bisciesto=29;
	while( (dia1<1 or dia1>31) or ((mes1==4 or mes1==6 or mes1==9 or mes1==11) and (dia1<1 or dia1>30)) or (mes1==2 and(dia1<1 or dia1>bisciesto)))
	{
		cout<<"Ingrese el dia correcto\n";
		cin>>dia1;
	}
	cout<<"\nFECHA FINAL: \n";

	cout<<"-anio: "; cin >> anio2;
	//Comprobar Mes
	cout<<"-Mes: "; cin >> mes2;
	while(mes2<1 or mes2>12)
	{
		cout<<"Ingrese el mes correcto\n";
		cin>>mes2;
	}
	cout<<"-Dia: "; cin >> dia2;

	//Comprobar Dia
	bisciesto=28;
	if( anio1%4==0 and (anio1%100!=0 or anio1%400==0))
        bisciesto=29;
	while( (dia2<1 or dia2>31) or ((mes2==4 or mes2==6 or mes2==9 or mes2==11) and (dia2<1 or dia2>31)) or (mes2==2 and(dia2<1 or dia2>bisciesto)))
	{
		cout<<"Ingrese el dia correcto\n";
		cin>>dia2;
	}

	//Conversion Fecha juliana
	int Inicio= FechaJuliana(anio1, mes1, dia1);
	int Fin= FechaJuliana(anio2, mes2, dia2);
	int Dias=Fin-Inicio+1;
	horas=24*Dias;
	minutos=horas*60;
	segundos=minutos*60;

    //Calcular semanas
	float temp=Dias;
	while(temp-7>0)
	{
		semanas++;
		temp-=7;
	}
	semanas+=temp/7;

	/*vector <char> a;
	a.push_back(semanas);
	cout<<*/

    //Calcular meses

    int anios2=anio2-anio1;

    //Calcular años
	temp=Dias;
	int bis=0;
	cout<<"1: "<<anio1<<" 2: "<<anio2<<endl;
	while(anio1!=anio2)
    {
        if( anio1%4==0 and (anio1%100!=0 or anio1%400==0) )
        {
            bis++;
        }
        anio1++;
    }

    cout<<endl<<"bis: "<<bis<<endl<<endl;
	while(temp-(bis+365)>0)
	{
		anios++;
		temp-=366;
	}

    int temp2=semanas;
    while(temp2-4>4.13*anios)
    {
        meses++;
        temp2-=4;
    }
	anios+=temp/365;
	temp=anios;

    //Output
	cout<<"Numero de dias:    "       << Dias      <<endl
		<<"Numero de semanas: "       << semanas   <<endl
		<<"Numero de meses:   "       << meses     <<endl
		<<"Numero de anios:    "      << anios2    <<endl<<endl
		<<"\nSegundos transcurridos: "<< segundos  <<endl
		<<"\nMinutos transcurridos "  << minutos   <<endl
		<<"\nHoras transcurridas: "   << horas     <<endl;










    getch();
    return 0;
}
