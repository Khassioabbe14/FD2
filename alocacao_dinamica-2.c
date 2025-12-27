#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado
 */

int *funcao(int N){
if (N <= 0){
    return NULL;
}
int *vetor = (int *)malloc(N * sizeof(int));
if (vetor == NULL){
    printf("alocacao incompleta\n");
    exit(1);
}

return vetor;
}


int main (){
int N;
int *vetor;
printf("Digite o valor positivo e inteiro\n");
scanf("%d",&N);

vetor = funcao(N);
if (vetor == NULL){
    printf("Tamanho invalido, tente novamente mais tarde\n");
    return 1;
}

for (int i = 0; i < N; i++){
    vetor[i] = i + 1;
    printf("vetor [%d] = %d\n",i+1,vetor[i]);
}

free(vetor);


    return 0;
}