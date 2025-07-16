# programa que elabore a organização de uma turma em grupos
# quantos grupo?
# quantos indivíduos no máximo?
# quem é o membro tal?
# já acabou?
# printar os grupos orgnizados
# usuário pergunta qual o n elemento do grupo x

grupos = {}
quant_grupos = int(input('Quantos grupos quer formar? '))
quant_max = int(input('Quantos membros no máximo: '))
for g in range(1, quant_grupos + 1):
    grupos[g] = []
    membros = 0
    while membros < quant_max:
        membro = input(f'Digite o {membros + 1}º membro do grupo {g}: ')
        grupos[g].append(membro)
        membros += 1
        if membros < quant_max:
            continuar = input('Já  acabou esse grupo? [S/N]: ').strip().upper()
            if continuar == 'S':
                break
print('\n' + '-' * 30)
print('Grupos Organizados:\n')

for grupo, membros in grupos.items():
    print(f'Grupo {grupo}:')
    for i, nome in enumerate(membros, start=1):
        print(f'  {i}º membro: {nome}')
    print('')


while True:
    ver = input('\nDeseja ver o n-ésimo membro de algum grupo? [S/N]: ').strip().upper()
    if ver == 'N':
        break

    entrada = input('Digite no formato grupo, membro (ex: 2, 3): ').strip()

    try:
        grupo_x, elemento_n = map(int, entrada.split(','))

        if grupo_x in grupos and 0 < elemento_n <= len(grupos[grupo_x]):
            print(f'O {elemento_n}º membro do grupo {grupo_x} é: {grupos[grupo_x][elemento_n - 1]}')
        else:
            print('Grupo ou número de membro inválido.')

    except ValueError:
        print('Entrada inválida. Use o formato correto: grupo, membro')
