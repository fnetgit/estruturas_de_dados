// Uma pilha segue o princípio LIFO (Last In, First Out). O último elemento
// a ser inserido é o primeiro a ser removido.


// Exemplo de implementação de pilha usando listas ligadas em C:
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da pilha
typedef struct Node {
    int valor;
    struct Node* proximo;
} Node;

// Função para empilhar (push)
void empilhar(Node** topo, int valor) {
    Node* novo = malloc(sizeof(Node));
    novo->valor = valor;
    novo->proximo = *topo;
    *topo = novo;
}

// Função para desempilhar (pop)
int desempilhar(Node** topo) {
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;  // Erro
    }
    Node* temp = *topo;
    int valor = temp->valor;
    *topo = temp->proximo;
    free(temp);
    return valor;
}

// Função para exibir a pilha
void exibir(Node* topo) {
    Node* atual = topo;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
}

int main() {
    Node* topo = NULL;  // Pilha inicialmente vazia

    empilhar(&topo, 10);
    empilhar(&topo, 20);
    empilhar(&topo, 30);

    printf("Pilha:\n");
    exibir(topo);

    printf("Desempilhando: %d\n", desempilhar(&topo));
    printf("Pilha após desempilhamento:\n");
    exibir(topo);

    return 0;
}
