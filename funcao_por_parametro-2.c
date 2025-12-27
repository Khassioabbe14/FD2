#include <stdio.h>
#include <stdlib.h>
//começando um codigo que converte segundos em horas,minutos,segundos como se fosse um cronometro
//start struct
typedef struct {
    int hora;
        int min;
            int seg;
}horario;
//finish struct
//start function
void converteHorario(int total_segundos, horario* hor){
    hor->hora = total_segundos / 3600;
        hor->min = (total_segundos % 3600) / 60;
            hor->seg = total_segundos % 60;
}//finish function
//complete this part
//start main
int main (){

//inicializando variaveis
    int total_segundos = 0;
        horario horario;
//começando um menu onde ele entrara em loop ate que o usuario digite 0 (total de 0 segundos para converter, o que nao faz muito sentido afinal converter 0 segundos é zero)
//o usuario pode fazer a conversao infinitas vezes ate que se deseje parar digitando o zero
do{
    printf("Quantos segundos voce deseja converter\n");
        printf("digite 0 caso queira sair do programa\n");
            setbuf(stdin,NULL);
                scanf("%d",&total_segundos);
                    converteHorario(total_segundos, &horario);
                        printf("tempo convertido\n%02d:%02d:%02d\n",horario.hora, horario.min, horario.seg);
} while (total_segundos != 0);
//while infinite
    return 0;
}//finish main