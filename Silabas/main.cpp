#include <iostream>
#include <stdio.h>

using namespace std;

bool vocal(char A)
{
    if(A =='A'||A == 'E'||A == 'I'||A == 'O'||A == 'U')
    {
        return 1;
    }
    return 0;

}




void Silabas(char *A, char *B)
{
     while(*A)
     {
         *B = *A;

         if(vocal(*A))
         {
             //cons = sgtVocal(A+1);
             B++;
             *B ='-';

            if(vocal(*A) &&(!vocal(*(A+1)) && !vocal(*(A+2))) && vocal(*(A+3))) // CASO 2 CONSONANTES ENTRE 2 VOCALES
             {
                 A++;
                 *B = *A;
                 B++;
                 *B = '-';
             }

            if(vocal(*A)&&(!vocal(*(A+1)) && !vocal(*(A+2)) && !vocal(*(A+3))) && vocal(*(A+4))) //CASO 3 CONSONANTES ENTRE 2 VOCALES
             {

                A++;
                *B = *A;
                A++;
                B++;
                *B = *A;
                B++;
                *B = '-';

             }

             if(vocal(*A)&&(!vocal(*(A+1)) && !vocal(*(A+2)) && !vocal(*(A+3)) && !vocal(*(A+4))) && vocal(*(A+5))) //CASO 4 C ENTRE 2 V
             {
                A++;
                *B = *A;
                A++;
                B++;
                *B = *A;
                B++;
                *B = '-';

             }

            if((*(A+1) == 'R'||*(A+1) == 'S'|| *(A+1) == 'N' || *(A+1) == 'L'|| *(A+1) == 'Z') && *(A+2) == '\0')//TERMINA EN R,S,N
            {
                A++;
                *B = *A;
                B++;
                *B = '\0';
            }
            if(!vocal(*A) && vocal(*(A+1)) && vocal(*(A+2)) && !vocal(*(A+3)))// 2 V ENTRE 2 C
            {
                 B--;
                *B = *A;
                B++;
                A++;
                *B = *A;
                B++;
                *B = '-';


            }


            if(*(A+1) == 'M' && (*(A+2) == 'B' || *(A+2) == 'P'))
             {
                A++;
                *B = *A;
                B++;
                *B = '-';
             }




             if(*A == 'U' && (*(A+1)=='I' || *(A+1)=='E'))
             {
                B--;
                *B = *A;
                B++;
                A++;
                *B = *A;
                B++;
                *B = '-';

             }



            if((*(A-1)=='S'&&*A=='U'&& *(A+1)=='B') || (*(A-1)=='P'&&*A=='O'&& *(A+1)=='S' && *(A+2) == 'T'))
             {
                 A++;
                 *B = *A;
                 B++;
                 *B='-';

             }
            if(vocal(*A)&& *(A+1) == 'N' && *(A+2) == '\0')
            {
                A++;
                *B = *A;
                B++;
                *B = '\0';

            }
           /* if(vocal(*A) &&(*(A+1) == 'R' && *(A+2) == 'R') || (*(A+1) == 'L' && *(A+2) == 'L'))
             {



             }*/

         }
         B++;
         A++;

     }
     if(*(B-1)=='-')
        B--;
     *B = '\0';

}




int main()
{
    char palabra[100];
    char silabas[100];
    cout<<"PALABRAS A SILABAS"<<endl;
    cout<<"\n";
    cout<<"Ingrese una palabra: "; cin>>palabra;
    Silabas(palabra,silabas);
    cout<<"\n";
    cout<<silabas;
    cout<<"\n";

    return 0;
}
