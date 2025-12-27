#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Crie um programa de cadastro que receba, armazene, e
em seguida, exiba os dados de 5 pessoas.
 Cada pessoa possui: nome, idade, peso, data de nascimento,
brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF,
caso estrangeiro, armazene o passaporte.
 Regra: Utilize structs, typedef, union e enum.
*/
//start das estruturas de armazenamentos.
struct Data{
int dia;
int mes;
int ano;
};

enum Nacionalidade{estrangeiro, brasileiro};

union documento {
 char cpf[12];
 char passaporte[50];
};

typedef struct{
char nome [50];
int idade;
float peso;
struct Data dat;
enum Nacionalidade nac;
union documento doc;
}Pessoa;

//começo da main
int main (){
Pessoa pessoa[5];
for (int i = 0; i < 5; i++){
    
setbuf(stdin,NULL);
printf("Digite o nome do cidadao\n");
fgets(pessoa[i].nome, 50, stdin);
pessoa[i].nome[strcspn(pessoa[i].nome,"\n")]='\0';
setbuf(stdin,NULL);
//parte do registro de nome completa;
printf("Digite a idade do cidadao\n");
scanf("%d",&pessoa[i].idade);
setbuf(stdin,NULL);
//parte do registro de idade completa;
printf("Digite o peso do cidadao\n");
scanf("%f",&pessoa[i].peso);
setbuf(stdin,NULL);
//parte do registro de peso completa;
printf("Digite o dia em que o cidadao nasceu\n");
scanf("%d",&pessoa[i].dat.dia);
printf("Digite o mes de nascimento\n");
scanf("%d",&pessoa[i].dat.mes);
printf("Digite o ano de nascimento\n");
scanf("%d",&pessoa[i].dat.ano);
//data de nascimento completa
printf("Digite a nacionalidade do cidadao \n(0 para estrangeiro e 1 para brasileiro)\n");
scanf("%d",&pessoa[i].nac);
if (pessoa[i].nac == 1){
    printf("Digite seu cpf abaixo:\n");
    setbuf(stdin,NULL);
    fgets(pessoa[i].doc.cpf,12,stdin);
    pessoa[i].doc.cpf[strcspn(pessoa[i].doc.cpf,"\n")]='\0';
    setbuf(stdin,NULL);
}else if (pessoa[i].nac == 0){
    printf("Digite seu passaporte abaixo:\n");
    setbuf(stdin,NULL);
    fgets(pessoa[i].doc.passaporte,12,stdin);
    pessoa[i].doc.passaporte[strcspn(pessoa[i].doc.passaporte,"\n")]='\0';
    setbuf(stdin,NULL);
}else if (pessoa[i].nac != 0 && pessoa[i].nac != 1){
    printf("validaçao incorreta recomeçe o cadastro\n");
    i--;
}
//nascionalidade fase final;
setbuf(stdin,NULL);
}

printf("\n=== Dados cadastrados ===\n");
for (int i = 0; i < 5; i++) {
    printf("Pessoa %d:\n", i + 1);
    printf("Nome: %s\n", pessoa[i].nome);
    printf("Idade: %d\n", pessoa[i].idade);
    printf("Peso: %.2f kg\n", pessoa[i].peso);
    printf("Data de nascimento: %02d/%02d/%04d\n", pessoa[i].dat.dia, pessoa[i].dat.mes, pessoa[i].dat.ano);
    if (pessoa[i].nac == 1) {
        printf("Nacionalidade: Brasileiro\n");
        printf("CPF: %s\n", pessoa[i].doc.cpf);
    } else {
        printf("Nacionalidade: Estrangeiro\n");
        printf("Passaporte: %s\n", pessoa[i].doc.passaporte);
    }
    printf("\n");
}//parte de exibiçao do cadastro das 5 pessoas.
    return 0;
}//fim da main