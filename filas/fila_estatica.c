// Fila (Queue): estrutura do tipo FIFO (primeiro a entrar, primeiro a sair).
// Fiz em sala com meu amigo Eric, dia 05/05/2025

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

typedef struct{
    int valores[TAM];
    int tamanho;
} Fila;

Fila *criar_fila(){
    Fila *fila = (Fila *)malloc(sizeof(Fila)); // (Fila*) converte o ponteiro genérico pra um
                                               // ponteiro do tipo certo, no caso, Fila*.
    fila->tamanho = 0;
    return fila;
}

int fila_vazia(Fila *fila){
    if (fila->tamanho == 0)
    {
        return 1;
    }
    return 0;
}

int fila_cheia(Fila *fila){
    if (fila->tamanho == TAM)
    {
        return 1;
    };
    return 0;
}

void inserir_valor(Fila *fila, int valor){
    if (!fila_cheia(fila))
    {
        fila->valores[fila->tamanho] = valor;
        fila->tamanho++;
        return;
    }
    printf("Fila cheia.\n");
}

void remover_valor(Fila *fila){
    if (!fila_vazia(fila))
    {
        for (int i = 0; i < fila->tamanho - 1; i++)
        {
            fila->valores[i] = fila->valores[i + 1];
        }
        fila->tamanho--;
        return;
    }
    printf("Fila vazia.\n");
}

void mostrar_fila(Fila *fila){
    if (!fila_vazia(fila))
    {
        for (int i = 0; i < fila->tamanho; i++)
        {
            printf("%d ", fila->valores[i]);
        }
        printf("\n");
    };
}

int main(){
    Fila *fila1 = criar_fila();
    inserir_valor(fila1, 34);
    inserir_valor(fila1, 13);
    inserir_valor(fila1, 15);

    remover_valor(fila1);
    mostrar_fila(fila1);
    return 0;
}