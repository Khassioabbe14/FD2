#include <stdio.h>
#include <stdlib.h>

//Crie uma estrutura para representar as coordenadas de
//um ponto no plano (posições X e Y). Em seguida, declare e
//leia do teclado dois pontos e exiba a distância entre eles. 

typedef struct{
    int pontoX;
    int pontoY;
} cord;
//cordenadas X e Y.

int main (){
int resultado;

cord c;
printf("Digite o ponto X em metros\n");
scanf("%d",&c.pontoX);
printf("Digite o ponto Y em metros\n");
scanf("%d",&c.pontoY);

//printf("%d %d\n",c.pontoX,c.pontoY); verificaçao de ponto.
//tudo funcionando ate aqui.

if (c.pontoX > c.pontoY)
{
    resultado = c.pontoX - c.pontoY;
}else if (c.pontoY > c.pontoX)
{
    resultado = c.pontoY - c.pontoX;
}else if (c.pontoX = c.pontoY)
{
    resultado = 0;
}//bloco de calculo para saber qual valor é maior se e ponto X ou ponto Y
//em seguida ele ja faz a conta para ver qual o valor resultante da subtraçao dos dois pontos

printf("resultado = %dm de distancia.\n",resultado);

return 0;
}