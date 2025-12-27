#include <stdio.h>
#include <stdlib.h>

/**
 * Função que recebe dois vetores (A e B) e o tamanho N,
 * e retorna um ponteiro para o vetor C alocado dinamicamente,
 * em que C[i] = A[i] * B[i].
 */

int *funcao(int vetorA[], int vetorB[], int N) {
    // Aloca dinamicamente o vetor C
    int *vetorC = (int *)malloc(N * sizeof(int));
    if (vetorC == NULL) {
        printf("Erro ao alocar memória para vetorC.\n");
        exit(1);
    }

    // Calcula C[i] = A[i] * B[i]
    for (int i = 0; i < N; i++) {
        vetorC[i] = vetorA[i] * vetorB[i];
    }

    return vetorC; // Retorna o ponteiro para vetorC
}

int main() {
    int N;

    // Solicita o tamanho dos vetores
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &N);

    // Aloca dinamicamente os vetores A e B
    int *vetorA = (int *)malloc(N * sizeof(int));
    int *vetorB = (int *)malloc(N * sizeof(int));
    if (vetorA == NULL || vetorB == NULL) {
        printf("Erro ao alocar memória para os vetores.\n");
        exit(1);
    }

    // Lê os valores do vetor A
    for (int i = 0; i < N; i++) {
        printf("Digite o valor [%d] do vetor A: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    // Lê os valores do vetor B
    for (int i = 0; i < N; i++) {
        printf("Digite o valor [%d] do vetor B: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Chama a função para calcular o vetor C
    int *vetorC = funcao(vetorA, vetorB, N);

    // Imprime os valores do vetor C
    printf("Vetor C (resultado da multiplicação):\n");
    for (int i = 0; i < N; i++) {
        printf("C[%d] = %d\n", i + 1, vetorC[i]);
    }

    // Libera a memória alocada
    free(vetorA);
    free(vetorB);
    free(vetorC);

    return 0;
}
