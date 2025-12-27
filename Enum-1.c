#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Crie uma enumeração representando os meses do ano.
Agora, escreva um programa que leia um valor inteiro do
teclado e exiba o nome do mês correspondente e a
quantidade de dias que ele possui.
 */

typedef enum {janeiro =1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro} Meses;

union Opcao {
    int mes;
};

int main () {
    union Opcao opcao;
    Meses meses;
    printf("Qual mes voce deseja exibir.\n");
    scanf("%d",&opcao.mes);
    meses = opcao.mes;
if (meses == 1){
    printf("mes escolhido foi janeiro\ntemos 31 dias no mes\n");
}else if (meses == 2){
    printf("mes escolhido foi fevereiro\ntemos 28 dias no mes\n");
}else if (meses == 3){
    printf("mes escolhido foi marco\ntemos 31 dias no mes\n");
}else if (meses == 4){
    printf("mes escolhido foi abril\ntemos 30 dias no mes\n");
}else if (meses == 5){
    printf("mes escolhido foi maio\ntemos 31 dias no mes\n");
}else if(meses == 6){
    printf("mes escolhido foi junho\ntemos 30 dias no mes\n");
}else if(meses == 7){
    printf("mes escolhido foi julho\ntemos 31 dias no mes\n");
}else if(meses == 8){
    printf("mes escolhido foi agosto\ntemos 31 dias no mes\n");
}else if (meses == 9){
    printf("mes escolhido foi setembro\ntemos 30 dias no mes\n");
}else if(meses == 10){
    printf("mes escolhido foi outubro\ntemos 31 dias no mes\n");
}else if(meses == 11){
    printf("mes escolhido foi novembro\ntemos 30 dias no mes\n");
}else if(meses == 12){
    printf("mes escolhido foi dezembro\ntemos 31 dias no mes\n");
}



return 0;   
}