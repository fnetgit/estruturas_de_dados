# PDF com exercícios de programação (vetores e matrizes)

# 1. Faça um programa que possua um vetor denominado A que armazene 6 números
# inteiros. O programa deve executar os seguintes passos:
# (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
# (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
# A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
# (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
# (d) Mostre na tela cada valor do vetor A, um em cada linha.

A = [1, 0, 5, -2, -5, 7]
B = A[0] + A[1] + A[5]
print(B)
A[4] = 100

# for i in A:
#     print(A[i])
# Dá erro porque o i ta sendo cada elemento da lista A, aí ele tenta achar o elemento 7 de A,
# mas não tem, então dá erro de fora de range

for i in A:
    print(i)
