/**
 *  Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
int vetor[5];
int *ptr;
for (int i = 0; i < 5; i++){
    printf("Digite o valor de %d:\n",i); 
    scanf("%d",&vetor[i]);
    vetor[i] = vetor[i] * 2;
}
ptr = vetor;
for (int i = 0; i < 5; i++){
    printf("| valor multiplicado por 2: %d | \n",ptr[i]);
if (ptr[i] % 2 == 0){
    printf("|endereco de memoria do valor %d e: %p |\n",ptr[i],&ptr[i]);
}}
    return 0;
}