#!/bin/bash
# Script de compilação rápida para macOS

echo "========================================"
echo "  Compilando Exercícios em C++"
echo "========================================"

# Criar diretório bin se não existir
mkdir -p bin

# Compilar cada programa
echo ""
echo "📦 Compilando primes.cpp..."
clang++ -std=c++11 -o bin/primes src/primes.cpp && echo "✓ Sucesso!" || echo "✗ Erro!"

echo ""
echo "📦 Compilando array_sorting.cpp..."
clang++ -std=c++11 -o bin/sorting src/array_sorting.cpp && echo "✓ Sucesso!" || echo "✗ Erro!"

echo ""
echo "📦 Compilando logic_basics.cpp..."
clang++ -std=c++11 -o bin/logic src/logic_basics.cpp && echo "✓ Sucesso!" || echo "✗ Erro!"

echo ""
echo "========================================"
echo "  ✓ Compilação Concluída!"
echo "========================================"
echo ""
echo "Para executar, use:"
echo "  ./bin/primes"
echo "  ./bin/sorting"
echo "  ./bin/logic"
