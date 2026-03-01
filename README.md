# 📚 Exercícios em C++

Uma coleção de exercícios práticos em C++ para aprender lógica de programação, manipulação de arrays e algoritmos fundamental.

## 🎯 Conteúdo

### 1. **Números Primos** (`primes.cpp`)
Exercícios focados em identificar e trabalhar com números primos.

#### Funções Disponíveis:
- **Imprimir Primos**: Exibe todos os números primos de 0 até um número N fornecido pelo usuário
- **Contar Primos**: Conta quantos números primos existem até N
- **N-ésimo Primo**: Encontra o N-ésimo número primo

#### Conceitos Abordados:
- Loops e condicionais
- Otimização com raiz quadrada
- Função auxiliar `isPrime()`

#### Exemplo de Uso:
```
Opção: 1
Digite um número: 30
Primos encontrados: 2 3 5 7 11 13 17 19 23 29
```

---

### 2. **Ordenação de Arrays** (`array_sorting.cpp`)
Implementação de diferentes algoritmos de ordenação e operações com arrays.

#### Algoritmos Inclusos:
- **Bubble Sort**: Algoritmo simples que compara elementos adjacentes
- **Selection Sort**: Encontra o menor elemento e coloca na posição correta
- **Insertion Sort**: Insere elementos um a um na posição correta

#### Operações Adicionais:
- Encontrar maior e menor valor no array
- Calcular a média dos elementos

#### Exemplo de Uso:
```
Array original: 45 23 89 12 34 56 78 90 11 67
=== BUBBLE SORT ===
Array ordenado: 11 12 23 34 45 56 67 78 89 90
```

---

### 3. **Lógica Básica** (`logic_basics.cpp`)
Exercícios fundamentais de lógica e algoritmos clássicos.

#### Exercícios Disponíveis:

1. **Sequência Fibonacci**
   - Gera os primeiros N termos da sequência
   - Uso: Comparação de padrões

2. **Verificar Palíndromo**
   - Verifica se um número é igual quando invertido
   - Exemplo: 121 é palíndromo

3. **Calcular Fatorial**
   - Calcula n! = n × (n-1) × ... × 1
   - Exemplo: 5! = 120

4. **Número Perfeito**
   - Um número é perfeito se for igual à soma de seus divisores próprios
   - Exemplo: 28 = 1 + 2 + 4 + 7 + 14

5. **Máximo Divisor Comum (MDC)**
   - Encontra o MDC entre dois números usando algoritmo de Euclides

6. **Potência de 2**
   - Verifica se um número é uma potência de 2
   - Usa operações binárias para otimização

---

## 🚀 Como Compilar e Executar (no macOS)

### Pré-requisitos
- Xcode Command Line Tools instaladas
- Terminal aberto na pasta do projeto

### Compilação

#### Para compilar um arquivo específico:
```bash
clang++ -o primes src/primes.cpp
clang++ -o sorting src/array_sorting.cpp
clang++ -o logic src/logic_basics.cpp
```

Ou usando `g++`:
```bash
g++ -o primes src/primes.cpp
g++ -o sorting src/array_sorting.cpp
g++ -o logic src/logic_basics.cpp
```

### Execução

Após compilar, execute:
```bash
./primes
./sorting
./logic
```

### Compilar e Executar em Uma Linha
```bash
clang++ src/primes.cpp -o primes && ./primes
clang++ src/array_sorting.cpp -o sorting && ./sorting
clang++ src/logic_basics.cpp -o logic && ./logic
```

---

## 📋 Estrutura do Projeto

```
cpp_exercises/
├── src/
│   ├── primes.cpp          # Exercícios com números primos
│   ├── array_sorting.cpp   # Algoritmos de ordenação
│   └── logic_basics.cpp    # Lógica e algoritmos fundamentais
├── README.md               # Este arquivo
└── makefile (opcional)     # Para compilação facilitada
```

---

## 💡 Conceitos de Programação Cobertos

| Conceito | Exercício |
|----------|-----------|
| Condicionais (`if/else`) | Todos |
| Loops (`for`, `while`) | Todos |
| Funções | Todos |
| Arrays | `array_sorting.cpp` |
| Algoritmos de Ordenação | `array_sorting.cpp` |
| Operações Binárias | `logic_basics.cpp` (Potência de 2) |
| Recursão (opcional) | Pode ser implementada em Fibonacci |
| Complexidade de Tempo | Comparação entre algoritmos de ordenação |

---

## 🎓 Sugestões de Prática

1. **Fácil**: 
   - Execute os programas com diferentes entradas
   - Modifique o intervalo de números testados

2. **Médio**:
   - Implemente versões recursivas dos algoritmos
   - Modifique para ordenar em ordem decrescente

3. **Avançado**:
   - Implemente Merge Sort e Quick Sort
   - Adicione análise de complexidade
   - Implemente busca binária

---

## 🔧 Melhorias Futuras

- [ ] Adicionar Quick Sort e Merge Sort
- [ ] Implementar versões com input/output em arquivo
- [ ] Adicionar testes automatizados
- [ ] Criar versão com classes (POO)
- [ ] Adicionar verificação de performance/tempo

---

## 📝 Notas Importantes

- Todos os programas têm menu interativo
- Validação de entrada para evitar erros
- Comentários explicativos no código
- Otimizações para melhor performance

---

## ✨ Autor

Coleção de exercícios criada para fins educacionais.

---

## 📄 Licença

Código livre para uso educacional e compartilhamento.
