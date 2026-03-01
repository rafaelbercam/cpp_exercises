#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Exercício 1: Sequência Fibonacci
void fibonacci(int n) {
    cout << "\n=== Fibonacci até " << n << " termos ===" << endl;
    
    if (n <= 0) {
        cout << "Digite um número maior que 0!" << endl;
        return;
    }
    
    long long a = 0, b = 1;
    cout << "Sequência: " << a << " ";
    
    for (int i = 1; i < n; i++) {
        cout << b << " ";
        long long temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// Exercício 2: Verificar se um número é palíndromo
void isPalindrome(int num) {
    cout << "\n=== Verificar Palíndromo ===" << endl;
    
    int original = num;
    int reversed = 0;
    int temp = num;
    
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    if (original == reversed) {
        cout << num << " é um palíndromo!" << endl;
    } else {
        cout << num << " NÃO é um palíndromo!" << endl;
        cout << "Original: " << original << " | Invertido: " << reversed << endl;
    }
}

// Exercício 3: Fatorial de um número
void factorial(int n) {
    cout << "\n=== Fatorial de " << n << " ===" << endl;
    
    if (n < 0) {
        cout << "Fatorial não existe para números negativos!" << endl;
        return;
    }
    
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    
    cout << n << "! = " << result << endl;
}

// Exercício 4: Verificar se é número perfeito
void isPerfectNumber(int num) {
    cout << "\n=== Verificar Número Perfeito ===" << endl;
    
    if (num <= 0) {
        cout << "Digite um número positivo!" << endl;
        return;
    }
    
    int sum = 0;
    cout << "Divisores: ";
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    
    cout << endl;
    
    if (sum == num) {
        cout << num << " é um número perfeito!" << endl;
        cout << "Soma dos divisores: " << sum << endl;
    } else {
        cout << num << " NÃO é um número perfeito!" << endl;
        cout << "Soma dos divisores: " << sum << endl;
    }
}

// Exercício 5: Máximo Divisor Comum (MDC)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void findGCD(int num1, int num2) {
    cout << "\n=== Máximo Divisor Comum (MDC) ===" << endl;
    
    int result = gcd(num1, num2);
    cout << "MDC de " << num1 << " e " << num2 << " é: " << result << endl;
}

// Exercício 6: Verificar se é expoente de 2
void isPowerOfTwo(int num) {
    cout << "\n=== Verificar se é Potência de 2 ===" << endl;
    
    if (num <= 0) {
        cout << "Digite um número positivo!" << endl;
        return;
    }
    
    // Um número é potência de 2 se tiver apenas um bit definido
    if ((num & (num - 1)) == 0) {
        int power = 0;
        int temp = num;
        while (temp > 1) {
            temp /= 2;
            power++;
        }
        cout << num << " é 2^" << power << endl;
    } else {
        cout << num << " NÃO é uma potência de 2!" << endl;
    }
}

int main() {
    int escolha, num1, num2;
    
    cout << "======================================" << endl;
    cout << "    EXERCÍCIOS DE LÓGICA BÁSICA      " << endl;
    cout << "======================================" << endl;
    
    do {
        cout << "\nEscolha um exercício:" << endl;
        cout << "1. Sequência Fibonacci" << endl;
        cout << "2. Verificar Palíndromo" << endl;
        cout << "3. Calcular Fatorial" << endl;
        cout << "4. Verificar Número Perfeito" << endl;
        cout << "5. Máximo Divisor Comum (MDC)" << endl;
        cout << "6. Verificar Potência de 2" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> escolha;
        
        if (escolha == 0) break;
        
        switch (escolha) {
            case 1:
                cout << "Quantos termos? ";
                cin >> num1;
                fibonacci(num1);
                break;
            case 2:
                cout << "Digite um número: ";
                cin >> num1;
                isPalindrome(num1);
                break;
            case 3:
                cout << "Digite um número: ";
                cin >> num1;
                factorial(num1);
                break;
            case 4:
                cout << "Digite um número: ";
                cin >> num1;
                isPerfectNumber(num1);
                break;
            case 5:
                cout << "Digite o primeiro número: ";
                cin >> num1;
                cout << "Digite o segundo número: ";
                cin >> num2;
                findGCD(num1, num2);
                break;
            case 6:
                cout << "Digite um número: ";
                cin >> num1;
                isPowerOfTwo(num1);
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (escolha != 0);
    
    cout << "\nAté próximo exercício!" << endl;
    return 0;
}
