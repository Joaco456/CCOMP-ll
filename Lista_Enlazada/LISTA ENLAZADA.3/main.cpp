#include <iostream>
#include <stdio.h>
using namespace std;

class Nodo
{
    public:
    int valor;
    Nodo *next;
    Nodo(int _valor, Nodo *_next = 0)
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
                temp = temp -> next;
            }
        }
        return 0;
    }

    void Agregar(int valor)
    {
        if(Buscar(valor) == 0)
        {
            if(head == 0)
            {
                head = new Nodo(valor);
                return;
            }
            Nodo *temp = head;
            while(temp)
            {
                if(temp -> next == 0) //FINAL
                {
                    temp -> next = new Nodo(valor);
                    return;
                }
                else if(head -> valor > valor)//INICIO
                {
                    head = new Nodo(valor,temp);
                    return;
                }
                else if(temp -> next -> valor > valor)
                {
                    temp -> next = new Nodo(valor, temp -> next);
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
            if(head -> valor == valor)
            {
                Nodo *next = head ->  next;
                delete head;
                head = next ;
                return;

            }


        while(temp)
        {
            if(temp -> next -> valor == valor)
            {
               Nodo *next = temp -> next -> next;
               delete temp -> next;
               temp -> next = next;
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

void Imprimir()
{
    if(head != 0)
    {
        Nodo *temp = head;
        while(temp)
        {
            cout<<temp -> valor<<" "<<endl;
            temp = temp -> next;
        }
    }
}



};









int main()
{
    Lista *listita = new Lista();
    listita -> Agregar(1);
    listita -> Agregar(6);
    listita -> Agregar(4);
    listita -> Agregar(3);
    listita -> Agregar(5);
    listita -> Agregar(2);
    listita -> Eliminar(1);
    listita -> Eliminar(4);
    listita -> Eliminar(6);

    listita -> Imprimir();

    return 0;
}
