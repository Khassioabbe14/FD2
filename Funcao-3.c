#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.
 */

int nota[3];


int funcao_notas(){
    setbuf(stdin,NULL);
    for (int i = 0; i < 3; i++){
        printf("Digite a nota do aluno em sequencia\n");
        scanf("%d",&nota[i]);
    }//for
    
}//complete

float funcao_arit(){
    float somaNota = 0;
    float resultado = 0;
    for (int i = 0; i < 3; i++){
        somaNota += nota[i];
    }
    resultado = somaNota / 3;
    return resultado;
}//complete

//media ponderada
//nota 1 * peso 1 + nota 2 * peso 2 + nota 3 * peso 3 / (peso 1 + peso 2 + peso 3)

float funcao_ponder(){
float resultado = 0;
float somaNota = 0;
    for (int i = 0; i < 3; i++){
        somaNota += nota[i];
    }//somaNota
    resultado = (nota[0] * 5 + nota[1] * 3 + nota[2] * 2)/(5+3+2);
    return resultado;
}//complete

int funcao_soma(){
    int somaNota = 0;
    for (int i = 0; i < 3; i++)
    {
        somaNota += nota[i];
    }
    return somaNota;
}//complete

int main (){
    float resultado_arit;
    float resultado_ponder;
    float resultado_soma;
    int opcao;
    funcao_notas();
    //fazer um menu, onde se escolhe a opcao desejada e volta quando termina a tarefa.
    do{
        printf("\nDigite a opcao desejada\n");
            printf("1 - funcao aritmetica\n2 - funcao ponderada\n3 - funcao soma\n0 - sair do programa\n");
                scanf("%d",&opcao);
    switch (opcao){
        case 1:
            resultado_arit = funcao_arit();
                printf("Funcao aritmetica = %.2f\n",resultado_arit);
//funcao aritmetica.
            break;
        case 2:
            resultado_ponder = funcao_ponder();
                printf("Funcao ponderada = %.2f\n",resultado_ponder);
//funcao ponderada.
            break;
        case 3:
            resultado_soma = funcao_soma();
                printf("Funcao soma = %.2f\n",resultado_soma);
//funcao soma.
            break;
        default:
                printf("\nTente novamente\n");
            //opcao invalida.
            break;
        }
    } while( opcao != 0 );
    // == 0 para sair do laço do menu (laço do_while).
    


    return 0;
}//fim da main