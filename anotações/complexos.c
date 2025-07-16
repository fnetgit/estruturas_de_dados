#include <stdio.h>

typedef struct Complexo {
    float real;
    float imag;
} Complexo; 

Complexo criarc() {
    Complexo complexo;
    printf("Digite a parte real: ");
    scanf("%f", &complexo.real);
    printf("Digite a parte imaginária: ");
    scanf("%f", &complexo.imag);
    return complexo;
}

Complexo somarc(Complexo c1, Complexo c2) {
    Complexo soma;
    soma.real = c1.real + c2.real;
    soma.imag = c1.imag + c2.imag;
    return soma;
}

Complexo multiplicarc(Complexo c1, Complexo c2) {
    Complexo produto;
    produto.real = (c1.real * c2.real) - (c1.imag * c2.imag); // ac – bd
    produto.imag = (c1.real * c2.imag) + (c1.imag * c2.real); // ad + cb
    return produto;
}

void imprimirc(Complexo c) {
    if (c.imag >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imag);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    }
}

int main() {
    printf("Número complexo 1:\n");
    Complexo c1 = criarc();

    printf("Número complexo 2:\n");
    Complexo c2 = criarc();

    printf("Número complexo 1: ");
    imprimirc(c1);
    printf("Número complexo 2: ");
    imprimirc(c2);

    Complexo soma = somarc(c1, c2);
    printf("Soma: ");
    imprimirc(soma);

    Complexo produto = multiplicarc(c1, c2);
    printf("Produto: ");
    imprimirc(produto);

    return 0;
}
