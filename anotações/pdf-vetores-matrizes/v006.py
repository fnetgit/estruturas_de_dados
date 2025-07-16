# Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
# deverá ser impresso o maior e o menor elemento do vetor.

vetor = list(map(int, input('').split()))[:10]
print(f'Maior valor: {max(vetor)}\nMenor valor: {min(vetor)}')
