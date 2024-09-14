#ifndef oplistas_H
#define oplistas_H

// Definindo um tipo "No" para a estrutura do nó usando typedef
typedef struct No {
    int dado;
    struct No* proximo;
} No;

// Definindo a estrutura do descritor que controla a lista
typedef struct {
    No* cabeca;  // Ponteiro para o primeiro nó (cabeça)
    int tamanho; // Armazena o tamanho da lista
} Lista;

// Função para criar um novo nó
No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->dado = valor;
    novoNo->proximo = NULL;
    return novoNo;
}

// Função para inicializar a lista com o descritor
void inicializarLista(Lista* lista) {
    lista->cabeca = NULL;
    lista->tamanho = 0;
}

// Inserir um nó no início da lista
void inserirInicio(Lista* lista, int valor) {
    No* novoNo = criarNo(valor);
    novoNo->proximo = lista->cabeca;
    lista->cabeca = novoNo;
    lista->tamanho++;  // Aumenta o tamanho da lista
}

// Inserir um nó no final da lista
void inserirFim(Lista* lista, int valor) {
    No* novoNo = criarNo(valor);

    if (lista->cabeca == NULL) {//verificando se a lista esta vazia
        lista->cabeca = novoNo;
    } else {
        No* temp = lista->cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        
        temp->proximo = novoNo;
    }
    lista->tamanho++;  // Aumenta o tamanho da lista
}

// Função para remover um nó com um valor específico
void removerNo(Lista* lista, int valor) {
    No* temp = lista->cabeca;
    No* anterior = NULL;

    // Se o nó a ser removido for o primeiro
    if (temp != NULL && temp->dado == valor) {
        lista->cabeca = temp->proximo;
        free(temp);
        lista->tamanho--;  // Diminui o tamanho da lista
        printf("O nó com valor %d foi removido.\n", valor);
        return;
    }

    // Procurando o nó a ser removido
    while (temp != NULL && temp->dado != valor) {
        anterior = temp;
        temp = temp->proximo;
    }

    // Se o valor não estiver na lista
    if (temp == NULL) {
        printf("O valor %d não foi encontrado na lista.\n", valor);
        return;
    }

    // Desvinculando o nó da lista
    anterior->proximo = temp->proximo;
    free(temp);
    lista->tamanho--;  // Diminui o tamanho da lista
    printf("O nó com valor %d foi removido.\n", valor);
}

// Exibir a lista
void exibirLista(Lista* lista) {
    No* temp = lista->cabeca;
    if (temp == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    
    while (temp != NULL) {
        printf("%d -> ", temp->dado);
        temp = temp->proximo;
    }
    printf("NULL\n");
    printf("Tamanho da lista: %d\n", lista->tamanho);
}

// Função para liberar a lista e liberar a memória de todos os nós
void liberarLista(Lista* lista) {
    No* temp = lista->cabeca;
    while (temp != NULL) {
        No* proximoNo = temp->proximo;  // Armazena o ponteiro para o próximo nó
        free(temp);  // Libera o nó atual
        temp = proximoNo;  // Avança para o próximo nó
    }
    lista->cabeca = NULL;  // Define a cabeça como NULL
    lista->tamanho = 0;  // Redefine o tamanho da lista para 0
      // Não exibe mais a lista após a liberação
    printf("A lista foi liberada.\n");
}

#endif //  oplistas_H