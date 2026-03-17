/*crie outro codigo que mude a complexidade do algoritmo abaixo e melhore ele:
#include <stdio.h>

// Algoritmo de ordenação Bubble Sort (Ordenação por Bolha)
//
// Análise detalhada de complexidade:
//
// Complexidade de tempo:
// - Melhor caso: O(n) com otimização de flag (não implementada aqui)
//   Ocorre quando o array já está ordenado e usamos uma flag para detectar isso
// - Caso médio: O(n²)
//   A quantidade média de comparações e trocas é proporcional a n²
// - Pior caso: O(n²)
//   Ocorre quando o array está em ordem inversa
//
// Complexidade de espaço:
// - O(1) - usa apenas espaço constante para variáveis auxiliares
// - É um algoritmo "in-place" que não requer espaço adicional proporcional à entrada
void sort(int arr[], int n) {
    int i, j;

    // Loop externo - Executa n iterações
    // Complexidade: O(n)
    // Este loop controla o número total de passagens pelo array
    // Após a i-ésima passagem, os i maiores elementos já estarão nas posições corretas
    for (i = 0; i < n; i++) {

        // Loop interno - Executa (n-i-1) iterações na i-ésima passagem
        // Complexidade: O(n-i-1) por passagem
        // Este loop faz as comparações e trocas entre elementos adjacentes
        // A cada passagem, precisamos verificar menos elementos, pois:
        //   - Os i maiores elementos já estão nas suas posições finais
        //   - Não precisamos comparar o último elemento com o próximo (que não existe)
        for (j = 0; j < n-i-1; j++) {

            // Comparação de elementos adjacentes
            // Complexidade: O(1) - operação constante
            if (arr[j] > arr[j+1]) {
                // Troca (swap) de elementos usando variável temporária
                // Complexidade: O(1) - três operações de atribuição
                int temp = arr[j];     // Salva o valor atual em temp
                arr[j] = arr[j+1];     // Substitui o valor atual pelo próximo
                arr[j+1] = temp;       // Coloca o valor original na próxima posição
            }
        }

        // Após cada iteração do loop externo:
        // - O maior elemento restante foi "borbulhado" para sua posição correta
        // - Precisamos verificar um elemento a menos na próxima passagem
    }

    // Análise matemática da complexidade total:
    // Somando as iterações do loop interno para todas as passagens:
    // (n-1) + (n-2) + (n-3) + ... + 2 + 1 = n(n-1)/2 = O(n²)
}

int main() {
    // Declaração e inicialização do array a ser ordenado
    int array[] = {64, 34, 25, 12, 22, 11, 90};

    // Cálculo do tamanho do array
    int n = sizeof(array) / sizeof(array[0]);

    // Chamada da função de ordenação - Complexidade O(n²)
    // Esta é a operação dominante do programa
    sort(array, n);

    // Impressão do array ordenado - Complexidade O(n)
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
*/
#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    mergeSort(array, 0, n - 1);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
