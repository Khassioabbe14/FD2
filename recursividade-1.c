#include <stdio.h>
#include <stdlib.h>
//programa que calcula o fatorial e exibe todos valores até chegar no valor fatorado.

int fatorial1(int valor){
    if (valor == 0){
        printf("1\n");
            return 1;
                }else if (valor > 0){
                    int resultado = valor * fatorial1(valor - 1);
                        printf("resultado: %d\n", resultado);
                            return resultado;
}}//fim da funcao

int main (){
    int valor;
        printf("Digite o valor para que seja feito o fatorial dele\n");
            scanf("%d",&valor);

int resultado = fatorial1(valor);
    if (resultado != -1){
        printf("resultado e %d\n",resultado);
}//if
return 0;
}//fim da main