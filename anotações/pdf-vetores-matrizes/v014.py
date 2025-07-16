# Faça um programa que leia um vetor de 10 posições e verifique se existem valores
# iguais e os escreva na tela.

valores = list(map(int, input('').split()))[:10]
repetidos = []
for i in valores:
    if valores.count(i) > 1:
        repetidos.append(i)
if repetidos:
    print(repetidos)
else:
    print('Não tem repetidos')
