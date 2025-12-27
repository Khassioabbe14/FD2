#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Elabore uma função que receba por parâmetro o sexo (caractere (letra)) e a
altura de uma pessoa (real(Float)), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7
 */

float funcao_mulher(float resultado_mulher, float altura){
resultado_mulher = (62.1*altura)-44.7;
return resultado_mulher;
}//funcao mulher


float funcao_homem(float resultado_homem, float altura){
resultado_homem = (72.7*altura) - 58;
return resultado_homem;
}//funcao homem


int main (){
char sexo;
    float altura;
        float retorno = 0;
    printf("Qual o seu sexo \n(H para homem, M para mulher)\n");
        scanf("%c",&sexo);
            printf("Digite a altura real\n");
                scanf("%f",&altura);
switch (sexo){
case 'h':
    retorno = funcao_homem(retorno,altura);
        printf("seu peso ideal e: %.2fkg\n",retorno);
            break;
case 'm':
    retorno = funcao_mulher(retorno,altura);
        printf("seu peso ideal e: %.2fkg\n",retorno);
            break;
default:
    printf("caso nao encontrado, tente com a letra minuscula\n");
        break;
}


    return 0;
}//fim da main