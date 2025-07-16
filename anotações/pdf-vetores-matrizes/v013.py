# Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
# encontram o maior e o menor valor.

valores = []
maiores = []
menores = []
for i in range(1, 6):
    valor = int(input(f'Digite o {i} número: '))
    valores.append(valor)
for i, v in enumerate(valores):
    maior = max(valores)
    menor = min(valores)
    if v == maior:
        maiores.append(i)
    if v == menor:
        menores.append(i)
print(f'Índice(s) do(s) Maior(es) valor(es): {maiores}')
print(f'Índice(s) do(s) Menor(es) valor(es): {menores}')
