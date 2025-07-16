// Uma árvore binária é uma estrutura onde:
// Cada nó tem no máximo dois filhos: um à esquerda (left) e outro à direita (right).
// O primeiro nó é chamado de raiz.
// Nós sem filhos são chamados de folhas.
// Os valores à esquerda são menores que o valor do nó.
// Os valores à direita são maiores que o valor do nó.

// Aplicações:
// Representar hierarquias (como pastas).
// Estruturas eficientes de busca (ex: árvore binária de busca).
// Compiladores, inteligência artificial, banco de dados...

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da árvore
typedef struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
} No;

// Cria um novo nó
No* criar_no(int valor) {
    No* novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;
    return novo;
}

// Insere um valor na árvore (binária de busca)
No* inserir(No* raiz, int valor) {
    if (raiz == NULL) {
        return criar_no(valor);
    }

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else {
        raiz->direita = inserir(raiz->direita, valor);
    }

    return raiz;
}

// Percurso in-order (esquerda, raiz, direita)
void in_order(No* raiz) {
    if (raiz != NULL) {
        in_order(raiz->esquerda);
        printf("%d ", raiz->valor);
        in_order(raiz->direita);
    }
}

// Percurso pré-ordem (raiz, esquerda, direita)
void pre_order(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        pre_order(raiz->esquerda);
        pre_order(raiz->direita);
    }
}

// Percurso pós-ordem (esquerda, direita, raiz)
void post_order(No* raiz) {
    if (raiz != NULL) {
        post_order(raiz->esquerda);
        post_order(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

int main() {
    No* raiz = NULL;

    raiz = inserir(raiz, 8);
    raiz = inserir(raiz, 3);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 1);
    raiz = inserir(raiz, 6);
    raiz = inserir(raiz, 14);
    raiz = inserir(raiz, 4);

    printf("In-order: ");
    in_order(raiz);
    printf("\n");

    printf("Pré-ordem: ");
    pre_order(raiz);
    printf("\n");

    printf("Pós-ordem: ");
    post_order(raiz);
    printf("\n");

    return 0;
}
