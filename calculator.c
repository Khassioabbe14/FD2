//base
#include <stdio.h>
#include <stdlib.h>
/**
 * start code history
 * Creating a system os calculation to do anything elsewhoever this things would have mathmatics things
 * initialized the program with plus numbers, degree numbers, division numbers and multiplication numbers
 * this is a start operation with this program
 * more front i will do other things for example derivation and integral numbers
 * finish code history
 */
//beta-tester-khassio;
//start global variavel;
float retorna = 0;
//start functions;

int funcao_soma(int n1, int n2){
    retorna = n1 + n2;
        printf("\nValor retornado %.2f\n\n",retorna);
}
int funcao_subtrai(int n1, int n2){
    if (n1>n2){
        retorna = n1 - n2;
            printf("\nValor retornado %.2f\n\n",retorna);
                }else{
                    retorna = n2 - n1;
                        printf("\nValor retornado %.2f\n\n",retorna);
}}
float funcao_divisao(float n1,float n2){
    retorna = n1/n2;
        printf("\nValor retornado %.2f\n\n",retorna);
}
float funcao_multi(float n1, float n2){
    retorna = n1 * n2;
        printf("\nValor retornado %.2f\n\n",retorna);
}
//finish functions



//start main
int main (int argc, char **argv){
    printf("Hello word\niniciando programa...\n...\n...\n...\n");
    int opcao;
        int x = 0;
            int y = 0;
                printf("Bem vindo a calculadora inteligente criada pela Nazawa Enterprise\n");
//start do_while
    do{
        printf("Vamos para as funcoes\n1 - soma de dois valores (x + y)\n2 - subtracao de dois valores (x - y)\n3 - divisao de dois valores (x / y)\n4 - multiplicacao de dois valores (x * y)\n\n9 - para finalizar\n");
            scanf("%d",&opcao);
//start switch
switch (opcao){
    case 1:
        printf("Digite os valores para a soma\n");
            printf("Valor 1\n");
                scanf("%d",&x);
                    printf("Valor 2\n");
                        scanf("%d",&y);
                            funcao_soma(x,y);
    break;
    case 2:
        printf("Digite os valores para a subtracao\n");
            printf("Valor 1\n");
                scanf("%d",&x);
                    printf("Valor 2\n");
                        scanf("%d",&y);
                            funcao_subtrai(x,y);
    break;
    case 3:
        printf("Digite os valores para a divisao\n");
            printf("Valor 1\n");
                scanf("%d",&x);
                    printf("Valor 2\n");
                        scanf("%d",&y);
                            funcao_divisao(x,y);
    break;
    case 4:
        printf("Digite os valores para a multiplicacao\n");
            printf("Valor 1\n");
                scanf("%d",&x);
                    printf("Valor 2\n");
                        scanf("%d",&y);
                            funcao_multi(x,y);
    break;
    case 5:
        //condiçao
    break;


    default:
    break;
}//finish switch
} while (opcao != 9);
//finish do_while

    return 0;
}//finish main