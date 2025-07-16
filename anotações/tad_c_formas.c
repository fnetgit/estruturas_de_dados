// Formas de fazer TADs:

// 1
typedef struct Lista {
    int tamanho;
} Lista;
// O typedef define um novo tipo chamado Lista, e Lista é o nome do tipo.
// A estrutura tem um nome (struct Lista) que pode ser usado diretamente, além do alias Lista.

// 2
typedef struct {
    int tamanho;
} Lista;
// A estrutura não possui um nome próprio e só pode ser usada através do alias Lista.
// Ou seja, uma estrutura de tipo anônimo.

// 3
struct Lista {
    int tamanho;
};
// Aqui, você não usa typedef, então struct Lista é o tipo.
// Lista é o nome da estrutura, mas você precisa usar struct Lista para declarar variáveis.


// RESUMO:
// 1 e 2: Usam typedef, o que permite usar o nome Lista diretamente para declarar variáveis,
// sem a necessidade de escrever struct toda vez.

// 3: Não usa typedef, então você deve usar struct Lista para declarar variáveis,
// com a necessidade de escrever struct todas as vezes.