#include <stdio.h>
#include <stdlib.h>
//começando um codigo que converte segundos em horas,minutos,segundos como se fosse um cronometro
//start function
void converteHora(int total_segundos, int* hora, int* min, int* seg){
    *hora = total_segundos/3600;
        *min = (total_segundos%3600)/60;
            *seg = total_segundos % 60;
}//finish function
//funcao acima cuja converte os segundos para minutos -> ou ate horas
//start main
int main (){
//inicialized variables
    int total_segundos = 0;
        int hora;
            int min;
                int seg;
//start do_while.exe
//inicio de um menu onde somente o "zero" pode sair desse menu
do{
    printf("Quantos segundos voce deseja converter\n");
        printf("digite 0 caso queira sair do programa\n");
            setbuf(stdin,NULL);
                scanf("%d",&total_segundos);
                    converteHora(total_segundos, &hora, &min, &seg);
                        printf("tempo convertido\n%02d:%02d:%02d\n",hora,min,seg);
} while (total_segundos != 0);
//finish do_while.exe

    return 0;
}//finish main