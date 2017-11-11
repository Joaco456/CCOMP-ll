#include <iostream>
#include <stdlib.h>

using namespace std;

class Nodo
{
    public:
        int valor;
        Nodo *next;

        Nodo(int _valor, Nodo *_next = NULL)
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
        head = 0;
    }
    void imprimir()
    {
        cout<<head->valor<<" ";
    }
    bool buscar_elemento(int valor)
    {
        if(head != 0){

            Nodo *ptr = head;
            while(ptr){
                if(valor == ptr->valor)
                {
                    return 1;
                }
                else
                {
                ptr = ptr->next;
                }
            }
        }
        return 0;
    }
    void agregar_elemento(int valor)
    {
        if(head == 0)
        {
            head = new Nodo(valor);
            return;
        }
        if (buscar_elemento(valor)!= 1)
        {
            Nodo *ptr = head;
            while(ptr)
            {
                if(ptr -> next==0)
                {
                    ptr -> next = new Nodo(valor);
                    return;
                }
            }
        }

    }

   /* void imprimir_elementos()
    {
        Nodo *ptr = head;
        while(ptr = != NULL){
            ptr->imprimir();
            ptr = ptr->next;
        }
    }
*/

};


int main()
{
    Lista *lista1 = new Lista;
    lista1 -> agregar_elemento(1);


    return 0;
}
