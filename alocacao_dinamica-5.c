#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Faça um programa que receba valores enquanto forem positivos.
Para isso, inicialmente, aloque dinamicamente um vetor de 5 números inteiros.

A cada vez que preencher as posições disponíveis, realoque o vetor aumentando o seu tamanho em 5 posições.

Ao receber um valor negativo, pare de solicitar novos valores e realoque o vetor para o tamanho exato da quantidade de elementos válidos digitados.
Ao finalizar, exiba os valores recebidos e Libere a memória alocada.
 */

int main (){
    int *valores;
        int n = 5;
            int *n2;

for (int i = 0; i < n; i++){
    valores = (int*)malloc(n * sizeof(int));
        if (valores == NULL){
            printf("alocacao nao foi bem sucedida\n");
                exit(1);
}//if

for (int i = 0; i < n; i++){
    printf("Valor do vetor [%d]: \n",i + 1);
        scanf("%d",&valores[i]);
}//for

for (int i = 0; i < n; i++){
    printf("valor do vetor [%d]: %d\n",i+1,valores[i]);
}//for

n2 = n;
    for (int i = 0; i < 1; i++){
        if (valores[i] < 0){
            printf("Codigo finalizado;\n");
                valores = (int*)realloc(n2,sizeof(int));
                    if (valores == NULL){
                        printf("realocaçao incompleta\n");
}//if

    for (int i = 0; i < n; i++){
        printf("vetor [%d]: %d \n",i+1,valores[i]);
}//for

    free(valores);
        free(n2);
            exit(1);
}//ifelse 
}//for

    printf("\nRealocando memoria...\n");
        n = n + 5;
            valores = (int*)realloc(valores,n * sizeof(int));
}//1 for

    for (int i = 0; i < n; i++){
        printf("vetor [%d]: %d \n",i+1,valores[i]);
}//for

    free(valores);
        free(n2);
return 0;
}