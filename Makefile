# Makefile para compilação dos exercícios em C++

CXX = clang++
CXXFLAGS = -std=c++11 -Wall
SRCDIR = src
BINDIR = bin

# Se o diretório bin não existir, será criado
$(shell mkdir -p $(BINDIR))

# Programas
PROGRAMS = $(BINDIR)/primes $(BINDIR)/sorting $(BINDIR)/logic

# Target padrão - compila todos
all: $(PROGRAMS)

# Compilar programa de primos
$(BINDIR)/primes: $(SRCDIR)/primes.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
	@echo "✓ primes compilado com sucesso"

# Compilar programa de ordenação
$(BINDIR)/sorting: $(SRCDIR)/array_sorting.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
	@echo "✓ sorting compilado com sucesso"

# Compilar programa de lógica
$(BINDIR)/logic: $(SRCDIR)/logic_basics.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
	@echo "✓ logic compilado com sucesso"

# Executar programa de primos
run-primes: $(BINDIR)/primes
	./$(BINDIR)/primes

# Executar programa de ordenação
run-sorting: $(BINDIR)/sorting
	./$(BINDIR)/sorting

# Executar programa de lógica
run-logic: $(BINDIR)/logic
	./$(BINDIR)/logic

# Executar todos
run-all: $(PROGRAMS)
	@echo "\n=== TESTANDO TODOS OS PROGRAMAS ===\n"
	@echo "Seria necessário input do usuário. Execute manualmente:"
	@echo "./$(BINDIR)/primes"
	@echo "./$(BINDIR)/sorting"
	@echo "./$(BINDIR)/logic"

# Limpar arquivos compilados
clean:
	rm -rf $(BINDIR)
	@echo "✓ Arquivos compilados removidos"

# Listar programas disponíveis
list:
	@echo "Programas disponíveis:"
	@echo "  make all              - Compila todos os programas"
	@echo "  make clean            - Remove arquivos compilados"
	@echo "  make run-primes       - Executa programa de primos"
	@echo "  make run-sorting      - Executa programa de ordenação"
	@echo "  make run-logic        - Executa programa de lógica"
	@echo "  make run-all          - Informações sobre como executar todos"

# Phony targets (não são arquivos)
.PHONY: all clean run-all run-primes run-sorting run-logic list
