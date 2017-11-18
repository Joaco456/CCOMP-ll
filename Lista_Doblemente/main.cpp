#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Nodo
{
public:
    int valor;
    Nodo *next;
    Nodo *prev;
    Nodo(int _valor, Nodo* _next = 0, Nodo *_prev = 0)
    {
        valor = _valor;
        next = _next;
        prev = _prev;
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
            if(temp -> valor == valor )
            {
                return 1;
            }
            temp = temp -> next;
        }
    }
    return 0;

}
void Agregar(int valor)
{
    if(Buscar(valor)==0)
    {
        if(head == 0)
        {
            head = new Nodo(valor);
            return;
        }
        Nodo *temp = head;
        while(temp)
        {
            if(temp -> next == 0)//AL FINAL
            {
                temp -> next = new Nodo(valor,0,temp);
                return;
            }
            else if(temp -> valor > valor)//AL INICIO
            {
                head = new Nodo(valor,temp);
                head -> next -> prev = head;
                return;
            }
            else if(temp -> next -> valor > valor) //EN MEDIO
            {
                temp -> next = new Nodo(valor,temp->next,temp);
                temp -> next -> next -> prev =  temp -> next;
                return;
            }
            temp = temp -> next;
        }
    }

}
void Eliminar(int valor)
{
    if(head != 0 and Buscar(valor))
    {
        Nodo *temp = head;
        if(head -> valor == valor)        //ELIMINAR COMIENZO
        {
            Nodo *next = head -> next;
            delete head;
            head = next;
            head -> prev = 0;
            return;
        }
        while(temp)
        {
            if(temp -> next -> valor == valor)
            {
                Nodo *next = temp -> next -> next;
                delete temp -> next;
                temp -> next = next;
                if(temp->next)
                    temp -> next -> prev = temp;
                return;
            }
            temp = temp -> next;
        }
    }

}


~Lista()
{
    if(head != 0)
    {
        Nodo *temp = head;
        while(temp)
        {
            Nodo *next = temp -> next;
            delete temp;
            temp = next;
        }
    }

}


void imprimir()
	{
		if(head != 0){
			Nodo *temp = head;
			while(temp)
			{
			    if(temp->prev !=0){
                    cout<<temp->prev->valor<<" <- ";
			    }
			    else
                    cout<<"     ";
				cout<<temp->valor;
				if(temp->next)
                {
                    cout<<" -> "<<temp->next->valor;
                }
                else
                    cout<<"     ";
                cout<<endl;
				temp = temp->next;
			}

		}
	}


};



int main()
{
    Lista *lista = new Lista();
    lista -> Agregar(1);
    lista ->Agregar(2);
    lista ->Agregar(3);
    lista ->Agregar(4);
    lista ->Agregar(5);
    lista ->Eliminar(1);
    lista -> Eliminar(3);
    lista -> Eliminar(5);

    lista ->imprimir();

    return 0;
}
