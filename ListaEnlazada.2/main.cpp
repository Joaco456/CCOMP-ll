#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class Nodo
{
public:
    int valor;
    Nodo *next;
    Nodo(int _valor, Nodo* _next = 0)
    {
        valor = _valor;
        next = _next;
    }

};


class Lista
{
public:
    Nodo *head;

Lista()
{
    head = NULL;
}

bool Buscar(int valor)
{
    if(head != 0)
    {
        Nodo *temp = head;
        while(temp)
        {
            if(temp -> valor == valor)
            {
                return true;
            }
            else{
                temp = temp -> next;
            }
        }

    }
    return 0;
}
};


void Agregar(int valor)
{


}






int main()
{


    return 0;
}
