// Uma lista circular duplamente ligada é uma variação onde:
// O último nó aponta para o primeiro nó (como na lista circular simples).
// O primeiro nó também aponta para o último nó (como nas listas duplamente ligadas).

// Cada nó tem dois ponteiros: um apontando para o próximo e outro para o anterior.
// A última posição aponta para a primeira e vice-versa.
// Podemos percorrer a lista de frente para trás ou de trás para frente.

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
        novo->proximo = *cabeca;  // Aponta para si mesmo
        novo->anterior = *cabeca; // Aponta para si mesmo
    } else {
        Node* temp = *cabeca;
        while (temp->proximo != *cabeca) {
            temp = temp->proximo;
        }
        temp->proximo = novo;  // Adiciona no final
        novo->anterior = temp; // Atualiza o ponteiro anterior
        novo->proximo = *cabeca; // Faz o último nó apontar para o primeiro
        (*cabeca)->anterior = novo; // Faz o primeiro nó apontar para o último
    }
}

// Função para exibir a lista de frente para trás
void exibir_frente(Node* cabeca) {
    if (cabeca == NULL) {
        printf("A lista está vazia!\n");
        return;
    }

    Node* atual = cabeca;
    do {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    } while (atual != cabeca);  // Quando voltar para o começo, para
}

// Função para exibir a lista de trás para frente
void exibir_tras(Node* cabeca) {
    if (cabeca == NULL) {
        printf("A lista está vazia!\n");
        return;
    }

    Node* atual = cabeca->anterior;
    do {
        printf("%d\n", atual->valor);
        atual = atual->anterior;
    } while (atual != cabeca->anterior);  // Quando voltar para o final, para
}

int main() {
    Node* cabeca = NULL;  // Inicializa a lista

    adicionar_no_final(&cabeca, 10);
    adicionar_no_final(&cabeca, 20);
    adicionar_no_final(&cabeca, 30);

    printf("Lista circular de frente para trás:\n");
    exibir_frente(cabeca);

    printf("\nLista circular de trás para frente:\n");
    exibir_tras(cabeca);

    // Liberar memória
    if (cabeca != NULL) {
        Node* temp = cabeca;
        do {
            Node* to_free = temp;
            temp = temp->proximo;
            free(to_free);
        } while (temp != cabeca);
    }

    return 0;
}
