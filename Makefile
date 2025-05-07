# Pasta onde os executáveis serão salvos
BIN = executaveis

# Compilar e rodar diretamente com: make nome (ex: make hello)
# Esse comando procura pelo arquivo nome.c em QUALQUER subpasta,
# compila para executaveis/nome e executa.

%:
	@mkdir -p $(BIN)
	@src_file=$$(find . -type f -name "$@.c" | head -n 1); \
	if [ -z "$$src_file" ]; then \
		echo "Arquivo '$@.c' não encontrado."; \
	else \
		echo "Compilando $$src_file → $(BIN)/$@"; \
		gcc -Wall -Wextra -g $$src_file -o $(BIN)/$@ && ./$(BIN)/$@; \
	fi

# Rodar um programa sem recompilar se ele já existir
run:
	@bash -c 'read -p "Nome do arquivo (sem .c): " name; \
	if [ -f "$(BIN)/$$name" ]; then \
		"./$(BIN)/$$name"; \
	else \
		echo "Executável não encontrado."; \
	fi'

# Apagar os arquivos compilados
clean:
	rm -rf $(BIN)


# O make é uma ferramenta que automatiza a compilação de programas, especialmente os 
# escritos em linguagens como C e C++. Ele lê um arquivo chamado Makefile, 
# que contém regras sobre como compilar e construir o programa.

# Por que usar:
# 1. Organiza dependências → Ajuda em projetos grandes com vários arquivos .c.
# 2. Compila apenas arquivos modificados → Evita recompilar tudo do zero.
# 3. Facilita a compilação → Não precisa lembrar comandos longos de gcc.
# 4. Automatiza tarefas → Pode rodar testes, limpar arquivos, etc.

# ---------------------Comandos do código acima-----------------------------
# Compilar e rodar um arquivo:      make nome_do_arquivo (ex: make hello)
# Executáveis ficam em:             executaveis/
# Rodar um já compilado:            make run
# Limpar todos os executáveis:      make clean
