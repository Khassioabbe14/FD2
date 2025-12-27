#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//jogo criado para +16 com seleçao de nome, idade e ranking
//ja esta feito a coleta de nome pelo teclado, idade pelo teclado, e ranking tendo verificaçao de rank
//proximos passos sera a criacao do jogo com um sistema de cartas


typedef struct {
char *usuario;
int idade;
char *ranking;
char ranks[5][20];
}nome;
//estrutura para salvar informaçoes do usuario

char* funcao(){
    static char nome[60];
    printf("Digite o nome do usuario abaixo\n");
    setbuf(stdin,NULL);
    fgets(nome, 60, stdin);
    nome[strcspn(nome,"\n")]='\0';
return nome;
}//funcao nome de usuario coletado a partir do teclado

int idade(){
    static int idade;
    printf("Digite sua idade\n");
    scanf("%d",&idade);
    while (getchar() != '\n');
    if (idade >= 16){
        printf("Prosseguindo com o jogo...\n");
    return idade;
    }else{
        printf("Nao possui idade suficiente para esse jogo\n");
        exit(1);
    }
}//funcao para receber idade e verificar se e maior de 16 anos

char* ranking(){
    static char ranking[60];
    printf("Digite em qual ranking o usuario esta\n");
    setbuf(stdin, NULL);
    fgets(ranking, 60, stdin);
    ranking[strcspn(ranking,"\n")]='\0';
return ranking;
}//funcao para pegar qual o ranking do jogador

int main (){
    nome user; //ativacao da estrutura
    user.usuario = funcao();    //funcao pegar nome do usuario e salvar na struct
    user.idade = idade();   //funcao pegar idade do usuario e testar se é +16 

    strcpy(user.ranks[0], "bronze");
    strcpy(user.ranks[1], "prata");
    strcpy(user.ranks[2], "ouro");
    strcpy(user.ranks[3], "platina");
    strcpy(user.ranks[4], "diamante");  //bloco para salvar os rankes

    for (int i = 0; i < 5; i++){
        printf("ranks disponiveis: %s\n",user.ranks[i]);
    }//for para exibir todos os ranks
    
    user.ranking = ranking();   //funcao pegar rank do usuario

//fim do bloco da parte introdutoria do jogo
//------------------------------------------------------------------------------------------------------------
//bloco das cartas se iniciando...

    printf("jogador %s, voce recebera 1 carta aleatoria sendo pedra, papel ou tesoura\n",user.usuario);
    printf("o objetivo do jogo e voce ganhar do oponente\npedra ganha de tesoura, tesoura ganha de papel, papel ganha de pedra\n");
    printf("e isso fica nesse ciclo, o jogo e basicamente esse... entao voce tera 1 carta para tentar ganhar na sorte\n");
//bloco de explicacao de como vai funcionar o jogo

    int jogador, computador;//inicializador das variaveis que vao ser utilizadas a frente
    
    srand(time(NULL));
    
    computador = rand() % 3;

//gerador de uma cara aleatorio pro oponente (computador).

    printf("Escolha uma opcao:\n");
    printf("0 - Pedra\n1 - Papel\n2 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &jogador);
//escolha do jogador para enfrentar seu adversario (computador)

    if (jogador < 0 || jogador > 2) {
        printf("Escolha invalida! Tente novamente.\n");
        return 1;
    }//if para fins de caso escolha uma opcao invalida 

    printf("Voce escolheu: %s\n", jogador == 0 ? "Pedra" : (jogador == 1 ? "Papel" : "Tesoura"));
    printf("O computador escolheu: %s\n", computador == 0 ? "Pedra" : (computador == 1 ? "Papel" : "Tesoura"));
//mostra o que cada usuario escolheu de opcao

    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 0 && computador == 2) || // Pedra vence Tesoura
               (jogador == 1 && computador == 0) || // Papel vence Pedra
               (jogador == 2 && computador == 1)) { // Tesoura vence Papel
        printf("Voce venceu!\n");
    } else {
        printf("Voce perdeu!\n");
    }
//bloco que compara se jogador vence computador ou computador vence jogador ou isso sera um empate.

    printf("\nJogo finalizado\n");
    printf("Para recomecar, seta para cima & enter\n\n");



    return 0;
}//fim da main