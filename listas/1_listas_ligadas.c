// Uma lista ligada é uma estrutura onde cada elemento (nó) aponta para o próximo.
// Diferente dos arrays, o tamanho pode crescer ou diminuir dinamicamente.
// Cada Node contém um valor e um ponteiro para o próximo.

// Exemplo: Criar e exibir uma lista ligada com 3 números
#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
typedef struct Node {
    int valor;
    struct Node* proximo;
} Node;

int main() {
    // Criando nós
    Node* primeiro = malloc(sizeof(Node));
    Node* segundo = malloc(sizeof(Node));
    Node* terceiro = malloc(sizeof(Node));

    // Atribuindo valores
    primeiro->valor = 10;
    primeiro->proximo = segundo;

    segundo->valor = 20;
    segundo->proximo = terceiro;

    terceiro->valor = 30;
    terceiro->proximo = NULL;

    // Percorrendo a lista
    Node* atual = primeiro;
    while (atual != NULL) {
        printf("Valor: %d\n", atual->valor);
        atual = atual->proximo; // "O ponteiro atual agora aponta para o próximo nó da lista.""
    }

    // Liberando memória
    free(terceiro);
    free(segundo);
    free(primeiro);

    return 0;
}
