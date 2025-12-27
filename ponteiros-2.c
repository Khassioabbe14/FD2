#include <stdio.h>
#include <stdlib.h>
/**
 * Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.
 */


int main (){
float vetor[10] = {1,2,3,4,5,6,7,8,9,10};
float *ptr;
ptr = &vetor[10];
for (int i = 0; i < 10; i++){
    printf("endereco da posicao %d: %p\n",(i + 1), &ptr[i]);
}
    return 0;
}