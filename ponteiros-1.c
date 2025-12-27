#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.
 */



int main (){
int valor1;
int valor2;
int *ptr1;
int *ptr2;
printf("Digite o valor da primeira variavel\n");
scanf("%d",&valor1);
printf("Digite o valor da segunda variavel\n");
scanf("%d",&valor2);
ptr1 = &valor1;
ptr2 = &valor2;

if (ptr1 > ptr2){
    printf("endereço do ponteiro 1 %p\n", (void*)ptr1);
    printf("Valor do ponteiro 1 %d\n", *ptr1);
}else{
    printf("endereço do ponteiro 2 %p\n", (void*)ptr2);
    printf("Valor do ponteiro 2 %d\n", *ptr2);
}

    return 0;
}