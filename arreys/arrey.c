// Um array é um conjunto de elementos do mesmo tipo, armazenados em posições 
// consecutivas de memória. Em C, os arrays têm tamanho fixo.

// Exemplo simples: armazenar 5 notas
#include <stdio.h>

int main() {
    float notas[5];  // Criando um array de 5 floats
    int i;

    // Lendo 5 notas do usuário
    for (i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Mostrando as notas
    printf("\nNotas digitadas:\n");
    for (i = 0; i < 5; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}
