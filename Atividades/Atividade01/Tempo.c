#include <stdio.h>

int main (int argc, char * argv []){
    int segundos, minutos, horas;

    printf ("Insira o tempo em segundos: ");
    scanf ("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos - horas * 3600;
    minutos = segundos / 60;
    segundos = segundos - minutos * 60;

    printf ("Tempo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}