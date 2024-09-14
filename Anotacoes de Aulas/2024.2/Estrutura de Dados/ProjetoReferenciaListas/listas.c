#include <stdio.h>
#include <stdlib.h>
#include "oplistas.h"

// Programa principal para testar a lista encadeada com descritor
int main() {
    Lista lista;  // Declarando a lista com descritor
    inicializarLista(&lista);  // Inicializando a lista

    inserirInicio(&lista, 1);
    inserirFim(&lista, 2);
    inserirFim(&lista, 6);
    inserirInicio(&lista, 4);

    printf("Lista atual: ");
    exibirLista(&lista);

    removerNo(&lista,6);
    printf("Lista após remoção: ");
    exibirLista(&lista);

    // Libera a lista e a memória alocada
    liberarLista(&lista);


    return 0;
}
