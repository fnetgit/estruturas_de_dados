class No:
    def __init__(self, valor):
        self.valor = valor
        self.esquerda = None
        self.direita = None

class ArvoreBinaria:
    def __init__(self):
        self.raiz = None

    def inserir(self, valor):
        self.raiz = self._inserir_recursivo(self.raiz, valor)

    def _inserir_recursivo(self, no, valor):
        if no is None:
            return No(valor)
        if valor < no.valor:
            no.esquerda = self._inserir_recursivo(no.esquerda, valor)
        else:
            no.direita = self._inserir_recursivo(no.direita, valor)
        return no

    def in_order(self):
        self._in_order_recursivo(self.raiz)
        print()

    def _in_order_recursivo(self, no):
        if no is not None:
            self._in_order_recursivo(no.esquerda)
            print(no.valor, end=" ")
            self._in_order_recursivo(no.direita)

    def pre_order(self):
        self._pre_order_recursivo(self.raiz)
        print()

    def _pre_order_recursivo(self, no):
        if no is not None:
            print(no.valor, end=" ")
            self._pre_order_recursivo(no.esquerda)
            self._pre_order_recursivo(no.direita)

    def post_order(self):
        self._post_order_recursivo(self.raiz)
        print()

    def _post_order_recursivo(self, no):
        if no is not None:
            self._post_order_recursivo(no.esquerda)
            self._post_order_recursivo(no.direita)
            print(no.valor, end=" ")

# Testando
arvore = ArvoreBinaria()
valores = [8, 3, 10, 1, 6, 14, 4]

for v in valores:
    arvore.inserir(v)

print("In-order:")
arvore.in_order()

print("Pré-ordem:")
arvore.pre_order()

print("Pós-ordem:")
arvore.post_order()
