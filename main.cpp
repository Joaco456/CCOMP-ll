#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;



int main(void)
{

for (int j=2;j<=1000;j++){//por definicion el 1 no es primo, se empieza en 2
 int a=0;
 for(int i=1;i<=1000;i++)//divide a j entre los números del 1 al 100
 {
     if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
     a++;
 }
 if (a==2){ //si solo tiene dos números divisores entonces es primo y se imprime
    printf("%d\n", j);
 };

 }



    getch();
    return 0;
}
