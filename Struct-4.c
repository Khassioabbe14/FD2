#include <stdio.h>
#include <stdlib.h>
/**
 * Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).

 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.
 */

struct eletrodomestico {
char nome[15];
int potencia;
int tempo;
};

int main (){
    struct eletrodomestico eletro1;
float dias = 0;
    printf("Nome do 1 eletrodomestico\n");
    fgets(eletro1.nome,15,stdin);
    eletro1.nome[strcspn(eletro1.nome,"\n")]='\0';
    setbuf(stdin,NULL);

    printf("Potencia real.\n");
    scanf("%d",&eletro1.potencia);

    printf("Quanto tempo ligado (Horas)\n");
    scanf("%d",&eletro1.tempo);

if (eletro1.tempo > 24)
{
    dias = eletro1.tempo / 24;
}else if (eletro1.tempo <= 24)
{
    dias = 24 / eletro1.tempo;
}
//divisao de 1 dia pelo tempo ligado
printf("Dias ligado = %.2f\n",dias);

//consumo total
float consumo_total;
float consumo_relativo;

    consumo_total = eletro1.potencia * dias;
    consumo_relativo = eletro1.potencia * eletro1.tempo * dias / 1000;
//Formula consumo relativo = potência (W) x horas de uso por dia (h) x dias de uso no mês / 1000 

    printf("consumo total de %.2fKw/h\n",consumo_total);
    printf("consumo relativo de %.2fKw/h\n",consumo_relativo);
    return 0;
}