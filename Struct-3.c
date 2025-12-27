#include <stdio.h>
#include <stdlib.h>
/**
 * Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;
 */

struct Aluno {
char nome[30];
char curso[30];
int notas[4];
};

int main (){
struct Aluno aluno1;
float media = 0;

printf("Digite o nome do aluno\n");
fgets(aluno1.nome, 30, stdin);
aluno1.nome[strcspn(aluno1.nome,"\n")]='\0';
setbuf(stdin, NULL);
//pega string a partir do teclado

printf("Digite o nome do curso\n");
fgets(aluno1.curso, 30, stdin);
aluno1.curso[strcspn(aluno1.curso,"\n")]='\0';
setbuf(stdin, NULL);
//pega string curso.

for (int i = 0; i < 4; i++){

    printf("Nota %d\n",i);
    scanf("%d",&aluno1.notas[i]);
    media += aluno1.notas[i];
}
media = media/4;
//printf("media %.2f\n",media); ponto de verificaçao de media

if (media >= 7)
{
    printf("Aluno %s aprovado no curso %s com nota %.2f\n",aluno1.nome,aluno1.curso,media);
}else if (media < 3)
{
    printf("Aluno %s reprovado no curso %s com nota %.2f\n",aluno1.nome,aluno1.curso,media);
}else if (media < 7 || media >= 3)
{
    printf("Aluno %s de exame no curso %s com nota %.2f\n",aluno1.nome,aluno1.curso,media);
}

    return 0;
}