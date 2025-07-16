# Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
# componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
# 10 elementos cada. Imprimir todos os conjuntos.

numbers = []
quadrados = []
for i in range(1, 11):
    number = int(input(f"{i} = "))
    numbers.append(number)
for number in numbers:
    quadrado = number ** 2
    quadrados.append(quadrado)
print(f'Números: {numbers}\nQuadrados: {quadrados}')
