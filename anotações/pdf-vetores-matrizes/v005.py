# Leia um vetor de 10 posicões. Contar e escrever quantos valores pares ele possui.

pares = []
numeros = list(map(int, input('').split()))[:10]
for numero in numeros:
    if numero % 2 == 0:
        pares.append(numero)
print(len(pares))
