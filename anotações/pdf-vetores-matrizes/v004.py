# Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
# X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
# escrever a soma dos valores encontrados nas respectivas posições X e Y.

numeros = list(map(int, input('').split()))[:8]
X = int(input('Digite uma posição: '))
Y = int(input('Digite outra posição: '))
print('Soma dos valores das posições: ',numeros[X] + numeros[Y])
