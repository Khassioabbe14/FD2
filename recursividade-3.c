#include <stdio.h>
#include <stdlib.h>
//Crie uma função que retorne x elevado a y através de operação de
//multiplicação. A função recebe x e y por parâmetro

int funcao(int valor1,int valor2){
    int resultado = 0;
if (valor2 == 1){
    resultado = valor1 * valor2;
        return resultado;
}else if (valor2 == 0){
    return 1;
}else{
    resultado = valor1 * funcao(valor1,valor2 - 1);
        return resultado;
}}

int main (){
    int valor1,valor2;
        printf("Digite o valor debaixo\n");
            scanf("%d",&valor1);
                printf("Digite o valor do elevado\n");
                    scanf("%d",&valor2);
                        int resultado = funcao(valor1,valor2);
                            printf("\nResultado = %d\n",resultado);
    return 0;
}