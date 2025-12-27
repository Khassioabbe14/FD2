/**
 * Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: local, horário e texto que descreve o
compromisso.
 */
//fgets:
//fgets(nome, 21, stdin);
//nome[strcspn(nome,"\n")]='\0';
//setbuf(stdin, NULL);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição das structs
struct horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct compromisso {
    char local[50];
    struct horario hora;
    char descricao[100];
};

struct dados {
    struct horario hora;
    struct Data dt;
    struct compromisso comp;
};

int main() {
    struct compromisso comp1;

    // Entrada de dados para o compromisso
    printf("Digite o local do compromisso: ");
    fgets(comp1.local, 50, stdin);
    comp1.local[strcspn(comp1.local, "\n")] = '\0'; // Remove o '\n' do final

    printf("Digite o horario do compromisso (hora, minutos e segundos):\n");
    printf("Hora: ");
    scanf("%d", &comp1.hora.hora);
    printf("Minutos: ");
    scanf("%d", &comp1.hora.minutos);
    printf("Segundos: ");
    scanf("%d", &comp1.hora.segundos);

    getchar(); // Limpa o buffer do teclado

    printf("Digite a descricao do compromisso: ");
    fgets(comp1.descricao, 100, stdin);
    comp1.descricao[strcspn(comp1.descricao, "\n")] = '\0';

    // Exibição dos dados do compromisso
    printf("\nCompromisso cadastrado:\n");
    printf("Local: %s\n", comp1.local);
    printf("Horario: %02d:%02d:%02d\n", comp1.hora.hora, comp1.hora.minutos, comp1.hora.segundos);
    printf("Descricao: %s\n", comp1.descricao);

    return 0;
}
