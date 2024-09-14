#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int data;
    struct elemento *next;
} elemento;

typedef struct
{
    int _tamanho;
    elemento *_firtElement;
} Lista;

elemento *CriaNo(int valor)
{
    elemento *no = (elemento *)malloc(sizeof(elemento));
    no->data = valor;
    no->next = NULL;
}

void InicializaLista(Lista *lista)
{
    lista->_firtElement = NULL;
    lista->_tamanho = 0;
}

void InsereElementoInicio(Lista *lista, int valor)
{
    elemento *el = CriaNo(valor);
    el->next = lista->_firtElement;
    lista->_firtElement = el;
    lista->_tamanho++;
}

void InsereElementoFimLista(Lista *lista, int valor)
{
    elemento *el = CriaNo(valor);
    if (lista->_firtElement == NULL)
    {
        lista->_firtElement = el;
        return;
    }
    elemento *temp = lista->_firtElement;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = el;
    lista->_tamanho++;
}
