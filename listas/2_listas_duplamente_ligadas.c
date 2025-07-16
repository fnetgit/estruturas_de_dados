// As listas duplamente ligadas são uma versão das listas ligadas onde 
// cada nó tem dois ponteiros:
// 1. Um apontando para o próximo nó (proximo).
// 2. E outro apontando para o nó anterior (anterior).
// Isso permite que você percorra a lista tanto para frente quanto para trás.

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
typedef struct Node {
    int valor;
    struct Node* proximo;
    struct Node* anterior;
} Node;

// Função para adicionar um nó no final
void adicionar_no_final(Node** cabeca, int valor) {
    Node* novo = malloc(sizeof(Node));
    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = NULL;

    if (*cabeca == NULL) {
        *cabeca = novo;  // Se a lista está vazia, o novo nó é a cabeça
    } else {
        Node* temp = *cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novo;  // Adiciona no final
        novo->anterior = temp;  // Atualiza o ponteiro anterior
    }
}

// Função para exibir a lista de frente para trás
void exibir_frente(Node* cabeca) {
    Node* atual = cabeca;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
}

// Função para exibir a lista de trás para frente
void exibir_tras(Node* cabeca) {
    Node* atual = cabeca;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }

    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->anterior;
    }
}

int main() {
    Node* cabeca = NULL;  // Inicializa a lista

    adicionar_no_final(&cabeca, 10);
    adicionar_no_final(&cabeca, 20);
    adicionar_no_final(&cabeca, 30);

    printf("Lista de frente para trás:\n");
    exibir_frente(cabeca);

    printf("\nLista de trás para frente:\n");
    exibir_tras(cabeca);

    // Liberar memória (sempre que não precisar mais dos nós)
    while (cabeca != NULL) {
        Node* temp = cabeca;
        cabeca = cabeca->proximo;
        free(temp);
    }

    return 0;
}
