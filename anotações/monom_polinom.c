// Monômio --> ax^e, sendo e sempre natural
// --> a = real --> coeficiente
// e --> expoente(IN)

// Poliônomio --> conjunto de monômios

// tad struct polinomio {
// int: grau;
// float: vetor[grau + 1];
// }

// só preciso armazenar os coeficientes, já que os expoentes não mudam
// só preciso perguntar quem está no coeficiente 
// grau indefinido = todos os coefs iguais  0

// somar os coefs que tem o mesmo indice de vetor
// tenho duas escolhas:
// coloco tudo no maior vetor (não crio novo vetor, mas perdo o outro vetor)
// crio um outro vetor com o grau do maior

// ex.:
// 2 0 0 -5 raiz3 0 |cooefs
// 0 1 2  3   4   5 |índices

// aval poli:
// termo indep: 2
// grau: 5
// polinômio: 2 -5³ + raiz3⁴ 

// o que são vetores: são listas estáticas (porque os índices são fixos)
// são estrtuturas flexíveis que admitem operações d inserção, remoção e recuperação de itens.

// TAD listas
// 

// Como implementar uma TAD lista? Basicamente existem duas formas:
// Estática (utilizando vetores)
// Dinâmica (utilizando listas ligadas)

// Implementação estática:
// Sempre que a quantidade de elementos é conhecida e não varia usa-se lista estática

// typedef struct {
// int chave;
// int valor;
// } ITEM;

// 19/04/2025
// Métodos de ordernar listas estáticas
// bubble sort e insert sort

// achar um item em uma lista ordenada:
// pesquisa binária

// inserir um item em uma lista ordenada:;
// inserção binária