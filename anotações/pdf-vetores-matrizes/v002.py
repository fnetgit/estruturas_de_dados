# Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
valores = []
for i in range(1, 7):
    valor = int(input(f'Digite um número {[i]}: '))
    valores.append(valor)
print('Valores:',valores)
