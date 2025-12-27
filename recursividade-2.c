#include <stdio.h>
#include <stdlib.h>
/**
 * Crie uma função que retorne x*y através de operação de soma. A função
recebe x e y por parâmetro
 */
int funcao(int valor1, int valor2){
if (valor1 == 0 || valor2 == 0){
    return 0;
}else if (valor2 == 1){
    return valor1;
}else{
    return valor1 + funcao(valor1,valor2 - 1);
}}//fim da funcao
int main (){
    int valor1,valor2;
        printf("primeiro valor que deseja a multiplicacao\n");
            scanf("%d",&valor1);
                printf("segundo valor que deseja a multiplicacao\n");
                    scanf("%d",&valor2);
                        int resultado = funcao(valor1,valor2);
                            printf("Resultado = %d\n",resultado);
return 0;
}//fim da main