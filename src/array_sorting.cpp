#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Função para imprimir um array
void printArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Exercício 1: Bubble Sort
void bubbleSort(int arr[], int size) {
    cout << "\n=== BUBBLE SORT ===" << endl;
    cout << "Array original: ";
    printArray(arr, size);
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Array ordenado: ";
    printArray(arr, size);
}

// Exercício 2: Selection Sort
void selectionSort(int arr[], int size) {
    cout << "\n=== SELECTION SORT ===" << endl;
    cout << "Array original: ";
    printArray(arr, size);
    
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
    
    cout << "Array ordenado: ";
    printArray(arr, size);
}

// Exercício 3: Insertion Sort
void insertionSort(int arr[], int size) {
    cout << "\n=== INSERTION SORT ===" << endl;
    cout << "Array original: ";
    printArray(arr, size);
    
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    
    cout << "Array ordenado: ";
    printArray(arr, size);
}

// Exercício 4: Encontrar maior e menor valor
void findMinMax(int arr[], int size) {
    cout << "\n=== ENCONTRAR MAIOR E MENOR ===" << endl;
    
    int minVal = arr[0];
    int maxVal = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    
    cout << "Menor valor: " << minVal << endl;
    cout << "Maior valor: " << maxVal << endl;
}

// Exercício 5: Calcular média dos elementos
void calculateAverage(int arr[], int size) {
    cout << "\n=== CALCULAR MÉDIA ===" << endl;
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    double average = (double)sum / size;
    cout << "Soma: " << sum << endl;
    cout << "Média: " << average << endl;
}

int main() {
    srand(time(0));
    int size = 10;
    int arr[10];
    
    cout << "======================================" << endl;
    cout << "   EXERCÍCIOS COM ARRAYS E ORDENAÇÃO  " << endl;
    cout << "======================================" << endl;
    
    // Gerar array aleatório
    cout << "\nGerando array com " << size << " números aleatórios..." << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1; // Números entre 1 e 100
    }
    
    int escolha;
    do {
        cout << "\nEscolha um algoritmo de ordenação:" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Encontrar Maior e Menor" << endl;
        cout << "5. Calcular Média" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: ";
        cin >> escolha;
        
        // Criar cópia do array para não perder o original
        int tempArr[10];
        for (int i = 0; i < size; i++) {
            tempArr[i] = arr[i];
        }
        
        switch (escolha) {
            case 1:
                bubbleSort(tempArr, size);
                break;
            case 2:
                selectionSort(tempArr, size);
                break;
            case 3:
                insertionSort(tempArr, size);
                break;
            case 4:
                findMinMax(arr, size);
                break;
            case 5:
                calculateAverage(arr, size);
                break;
            case 0:
                cout << "Até próximo exercício!" << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (escolha != 0);
    
    return 0;
}
