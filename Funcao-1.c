#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor;
 */

int funcao(int n1,int n2,int n3){
    if (n1 > n2 && n1 > n3){
        printf("\nO primeiro valor digitado e o maior\n");
        return n1;
    }else if (n2 > n1 && n2 > n3){
        printf("\nO segundo valor digitado e o maior\n");
        return n2;
    }else{
        printf("\nO terceiro valor digitado e o maior\n");
        return n3;
    }
}//funcao

int main (){
    int num1,num2,num3,resultado;
printf("Digite o primeiro valor\n");
scanf("%d",&num1);
printf("Digite o segundo valor\n");
scanf("%d",&num2);
printf("Digite o terceiro valor\n");
scanf("%d",&num3);
printf("Verificando qual o maior valor...\n");
resultado = funcao(num1,num2,num3);
printf("o maior valor entre os digitados acima e: %d\n",resultado);
    return 0;
}