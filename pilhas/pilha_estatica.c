// 05/05/2025

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct{
    int valores[TAM];
    int tamanho;
} Pilha;

Pilha *criar_pilha(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->tamanho = 0;
    return pilha;
}

void empilhar(Pilha *pilha, int valor){
    // Na pilha, no vetor valores, na posição tamanho, coloque o valor
    pilha->valores[pilha->tamanho] = valor; 
    pilha->tamanho++;
}

void desempilhar(Pilha *pilha){
    for (int i = 0; i < pilha->tamanho; i++) {
        
    };
}