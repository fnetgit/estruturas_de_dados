# Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
# Imprima o vetor, o maior elemento e a posição que ele se encontra.

vetor = list(map(int, input('').split()))[:10]
indices = []
maior = max(vetor)
for i, v in enumerate(vetor):
    if v == maior:
        indices.append(i)
print(indices)
