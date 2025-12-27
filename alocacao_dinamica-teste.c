#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//apenas testando codigos com alocaçoes dinamicas
//nada muito produtivo por aqui xD

typedef struct {
int x, y;
}Ponto;

int main (){
/*
    printf("Caractere %ld\n",sizeof(char));// 1
    printf("Inteiro %ld\n",sizeof(int));// 4
    printf("Float %ld\n",sizeof(float));// 4
    printf("Ponto %ld\n",sizeof(Ponto));// 8
*/
//Aloca memória para o vetor
int *p = malloc(50*sizeof(int));
for (int i = 0; i < 50; i++){
 p[i] = i+1;
}// for
for (int i = 0; i < 50; i++){
 printf("%d ", p[i]);
}// for
printf("\n");
//libera 
p = realloc(p, 100*sizeof(int));
//realocaçao de memoria para 100 valores inteiros
for (int i = 0; i < 100; i++){
p[i] = i+1;
}
for (int i = 0; i < 100; i++){
    printf("%d ",p[i]);
}
free(p);
//free para liberar a memoria alocada no ponteiro p
    return 0;
}