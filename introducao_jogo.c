#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funcao(){
    static char nome[60];
    printf("Digite o nome do usuario abaixo\n");
    fgets(nome, 60, stdin);
    nome[strcspn(nome,"\n")]='\0';
return nome;
}//funcao nome de usuario coletado a partir do teclado

typedef struct {
char *nome_usuario;
int idade;
int opcao;
}dados;
//struct dados 

int verificaIdade(int idade){
    if (idade >= 18){
        printf("Voce e maior de idade e pode prosseguir com o jogo\n");
    }else{
        printf("Voce nao e maior de idade, portanto nao pode jogar\n");
        exit(1);
}}//funcao verifica idade

int verificaOpcao (int opcao){
    if (opcao == 1){
        printf("Perfeito, vamos prosseguir para nosso tutorial\n");
    }else if(opcao == 0){
        printf("Entao voce ja e um Pro Player, vamos ao jogo entao\n");
}}//funcao verifica opcao

int main (){
    dados dados;
    printf("Bem vindo ao nosso jogo Super Trunfo\n\n");
    dados.nome_usuario = funcao();
    printf("Agora nos diga quantos anos voce tem %s\n",dados.nome_usuario);
    scanf("%d",&dados.idade);
    verificaIdade(dados.idade);
    printf("Voce gostaria de ver nosso tutorial ?\n1 para sim\n0 para nao\n");
    scanf("%i",&dados.opcao);
    for (int i = 0; i < 1; i++){
    if (dados.opcao > 1 || dados.opcao < 0){
    printf("Tente novamente, parece que sua opcao escolhida foi invalida\n");
    scanf("%d",&dados.opcao);
    i--;
}//if else
}//for
    verificaOpcao(dados.opcao);
                                                            

    return 0;
}//fim da main