# Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente
# com o maior, o menor e a média dos valores

valores = []
for i in range(1, 6):
    valor = int(input(f'Digite o valor {i}: '))
    valores.append(valor)
print('Todos os valores: ', valores)
print(f'Maior: {max(valores)}\nMenor: {min(valores)}')
