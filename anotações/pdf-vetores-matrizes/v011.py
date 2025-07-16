# Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
# quantidade de números negativos e a soma dos números positivos desse vetor.

reais = []
negativos = []
positivos = []
for i in range(1, 11):
    real = float(input(f'Digite o {i}º número real: '))
    if real < 0:
        negativos.append(real)
    else:
        positivos.append(real)
print(len(negativos))
print(sum(positivos))
