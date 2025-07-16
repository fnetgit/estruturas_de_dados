# Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os
# valores lidos na ordem inversa.

numeros = []
for i in range(0, 4):
    numero = int(input('Digite um número par: '))
    while numero % 2 != 0:
        numero = int(input('Digite um número PAR: '))
    numeros.append(numero)
print(numeros[::-1])
