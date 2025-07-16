// Em uma lista circular simples, o último nó da lista aponta para o primeiro nó.
// Isso faz com que a lista "volte ao início" quando você percorre os elementos.


#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
typedef struct Node {
    int valor;
    struct Node* proximo;
} Node;

// Função para adicionar um nó no final
void adicionar_no_final(Node** cabeca, int valor) {
    Node* novo = malloc(sizeof(Node));
    novo->valor = valor;
    novo->proximo = NULL;

    if (*cabeca == NULL) {
        *cabeca = novo;  // Se a lista está vazia, o novo nó é a cabeça
        novo->proximo = *cabeca;  // Aponta para si mesmo (primeiro nó)
    } else {
        Node* temp = *cabeca;
        while (temp->proximo != *cabeca) {
            temp = temp->proximo;
        }
        temp->proximo = novo;  // Adiciona no final
        novo->proximo = *cabeca;  // Faz o último nó apontar para o primeiro
    }
}

// Função para exibir a lista (percorre até encontrar o primeiro nó novamente)
void exibir(Node* cabeca) {
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

int main() {
    Node* cabeca = NULL;  // Inicializa a lista

    adicionar_no_final(&cabeca, 10);
    adicionar_no_final(&cabeca, 20);
    adicionar_no_final(&cabeca, 30);

    printf("Lista circular:\n");
    exibir(cabeca);

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
