
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//int diaMes = DiaMes(year, mes);
string NameMonth(int mes)
{
    switch(mes)
    {
        case 1: return "Enero";
        case 2: return "Febrero";
        case 3: return "Marzo";
        case 4: return "Abril";
        case 5: return "Mayo";
        case 6: return "Junio";
        case 7: return "Julio";
        case 8: return "Agosto";
        case 9: return "Setiembre";
        case 10: return "Octubre";
        case 11: return "Noviembre";
        case 12: return "Diciembre";
    }

}
bool Bisiesto(int year)
{
    if(year % 4 != 0) return false;
    if(year % 100 != 0) return true;
    if(year % 400 != 0) return false;
    return true;

}


int DiaMes(int year,int mes)
{
    if(mes==1 || mes == 3 || mes == 5 || mes == 7 || mes == 8  || mes == 10 || mes == 12)
        return 31;
    if(mes ==  2){
        if(Bisiesto(year)) return 29;
        return 28;
    }
    return 30;
}

int Zeller(int year, int mes)
{
    int a = (14 - mes) /12;
    int y = year - a;
    int m = mes + 12 * a -2;
    int dia = 0, d;
    d = (dia + y + y/ 4-y /100 +y/ 400 +(31*m)/12) % 7;
    return(d);

}

void Calendario(int year)
{
    for(int mes = 1; mes<=12; mes++)
    {

        cout<<"Month: "<<NameMonth(mes)<<"\n";
        cout<<"Lun Mar Mie Jue Vie Sab Dom \n";
        int z = Zeller(year,mes);
        for(int i = 0; i<z; i++)
        {
            cout<<"    ";
        }

        int diaMes = DiaMes(year, mes);
        for(int dia = 1; dia<=diaMes; dia++)
        {
            printf("%3d ",dia);
            z++;
            if(z % 7 == 0)  cout<<"\n";



        }
        cout<<"\n\n";
    }

}

int main()
{
    int year;
    cout<<"Year: ";cin>>year;
    Calendario(year);





    //system("pause");

    return 0;
}
