/**
 * Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor\n");
    scanf("%d",&tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL){
        printf("erro ao alocar memoria\n");
        return 1;
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o %d elemento do vetor\n",i + 1);
        scanf("%d",&vetor[i]);
    }
    printf("\nvetor lido\n\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor [ %d ]: %d \n",i + 1, vetor[i]);
    }
    free(vetor);
    return 0;
}
