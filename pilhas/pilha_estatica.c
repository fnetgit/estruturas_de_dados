// Pilha (Stack): estrutura do tipo LIFO (último a entrar, primeiro a sair).
// 05/05/2025

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct{
    int valores[TAM]; // Onde os valores realmente ficam armazenados
    int tamanho;      // Quantos elementos estão na pilha atualmente
} Pilha;

Pilha *criar_pilha(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->tamanho = 0;
    return pilha;
}

int pilha_vazia(Pilha *pilha){
    if (pilha->tamanho == 0){
        return 1;
    }
    return 0;
}

int pilha_cheia(Pilha *pilha){
    if (pilha->tamanho == TAM) {
        return 1;
    }
    return 0;
}

void empilhar(Pilha *pilha, int valor){
    if (!pilha_cheia(pilha)){
        // Na pilha, no vetor valores, na posição tamanho, coloque o valor
        pilha->valores[pilha->tamanho] = valor; 
        pilha->tamanho++;
        return;
    }
    printf("Pilha cheia.\n");
}

void desempilhar(Pilha *pilha){
    if (!pilha_vazia(pilha)) {
        pilha->tamanho--;
        return;
    }
    printf("Pilha vazia.\n");
}

void mostrar_pilha(Pilha *pilha){
    if (pilha_vazia(pilha)){
        printf("Pilha vazia.\n");
    }
    else {
        for (int i = 0; i < pilha->tamanho; i++) {
            printf("%d ", pilha->valores[i]);
        }
        printf("\n");
    }
}


int main() {
    Pilha *pilha1 = criar_pilha();
    // empilhar(pilha1, 1);
    // empilhar(pilha1, 8);
    // empilhar(pilha1, 9);
    // desempilhar(pilha1);
    // desempilhar(pilha1);
    mostrar_pilha(pilha1);
    return 0;
}