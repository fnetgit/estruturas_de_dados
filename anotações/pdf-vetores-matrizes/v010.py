# Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
# calcule e imprima a média geral

notas = []
for i in range(1, 16):
    nota = int(input(f'Nota do aluno {i}: '))
    notas.append(nota)
print('Média:',sum(notas) // len(notas))
