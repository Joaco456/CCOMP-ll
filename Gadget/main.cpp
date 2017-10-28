#include <iostream>
#include <stdio.h>
#include <conio.h>

#define ARRIBA 72
#define ABAJO 80
#define IZQUIERDA 75
#define DERECHA 77

using namespace std;


int tabla[4][4];
int x = 3,y = 3;
char caracter, enter;

void imprimir_tabla()
{
    int i = 0,j;
    while(i<4){
        j = 0;
        while(j < 4){
            if(tabla[i][j] != 0){
                printf("[%2i]", tabla[i][j]);
            }
            else{
                printf("[  ]");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int i = 0, j = 0, cont = 1;
    char caracter, enter;
    while(i<4){
        j = 0;
        while(j < 4){
                tabla[i][j] = cont;
            //printf("[%2i]", tabla[i][j]);
            cont++;
            j++;
        }
        printf("\n");
        i++;
    }

    tabla[3][3] = 0;
    imprimir_tabla();
    do{
        caracter = getchar();
        enter = getchar();
        switch (caracter)
        {
            case 's':
                if(y <= 2){
                    tabla[y][x] = tabla[y+1][x];
                    //tabla[y][x] = tabla[y+1][x];
                    tabla[y+1][x] = 0;
                    imprimir_tabla();
                    y--;
                }
                else{
                    cout<<"Se sale del tablero "<<endl;
                }
                break;
            case 'w':
                if(y >= 1){
                    tabla[y][x] = tabla[y-1][x];
                    //tabla[y-1][x] = tabla[y-1][x];
                    tabla[y-1][x] = 0;
                    imprimir_tabla();
                    y++;
                }
                else{
                    cout<<"Se sale del tablero "<<endl;
                }
                break;
            case 'd':
                 if(x <= 2){
                    tabla[y][x] = tabla[y][x+1];
                    //tabla[y][x] = tabla[y][x-1];
                    tabla[y][x-1] = 0;
                    imprimir_tabla();
                    x--;
                }
                else{
                    cout<<"Se sale del tablero "<<endl;
                }
                break;
            case 'a':
                 if(x >= 1){
                    tabla[y][x] = tabla[y][x-1];
                    //tabla[y][x] = tabla[y][x+1];
                    tabla[y][x-1] = 0;
                    imprimir_tabla();
                    x++;
                }
                else{
                    cout<<"Se sale del tablero "<<endl;
                }
                break;
            case '0':
                break;
            default:
                cout<<"Caracter invalido"<<endl;
                break;

        }

        printf("Caracter: %c\n",caracter);
    }while(caracter != '0');







    return 0;
}
void imprimir_tabla();

