#include <iostream>
#include <cmath>
using namespace std;

// Função auxiliar para verificar se um número é primo
bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Exercício 1: Imprimir todos os números primos de 0 até N
void printPrimesUpTo(int n) {
    cout << "\n=== Números Primos de 0 a " << n << " ===" << endl;
    cout << "Primos encontrados: ";
    
    for (int i = 0; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Exercício 2: Contar quantos primos existem até N
void countPrimes(int n) {
    cout << "\n=== Contagem de Primos de 0 a " << n << " ===" << endl;
    int count = 0;
    
    for (int i = 0; i <= n; i++) {
        if (isPrime(i)) count++;
    }
    
    cout << "Total de números primos: " << count << endl;
}

// Exercício 3: Encontrar o N-ésimo número primo
void findNthPrime(int n) {
    cout << "\n=== Encontrar o " << n << "º número primo ===" << endl;
    
    if (n <= 0) {
        cout << "Número inválido!" << endl;
        return;
    }
    
    int count = 0;
    int num = 2;
    
    while (count < n) {
        if (isPrime(num)) count++;
        if (count < n) num++;
    }
    
    cout << "O " << n << "º número primo é: " << num << endl;
}

int main() {
    int escolha, numero;
    
    cout << "======================================" << endl;
    cout << "    EXERCÍCIOS COM NÚMEROS PRIMOS    " << endl;
    cout << "======================================" << endl;
    
    do {
        cout << "\nEscolha uma opção:" << endl;
        cout << "1. Imprimir números primos até N" << endl;
        cout << "2. Contar quantos primos existem até N" << endl;
        cout << "3. Encontrar o N-ésimo número primo" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> escolha;
        
        if (escolha == 0) break;
        
        if (escolha >= 1 && escolha <= 3) {
            cout << "Digite um número: ";
            cin >> numero;
            
            if (numero < 0) {
                cout << "Por favor, digite um número positivo!" << endl;
                continue;
            }
            
            switch (escolha) {
                case 1:
                    printPrimesUpTo(numero);
                    break;
                case 2:
                    countPrimes(numero);
                    break;
                case 3:
                    findNthPrime(numero);
                    break;
            }
        } else {
            cout << "Opção inválida!" << endl;
        }
    } while (escolha != 0);
    
    cout << "\nAté próximo exercício!" << endl;
    return 0;
}
