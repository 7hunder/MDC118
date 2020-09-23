#include <stdio.h>

int main (){
    int contador = 0, fatorial= 1;

    scanf ("%d", &contador);

    for (contador; contador >= 1; contador--){
        fatorial = fatorial * contador;
    }
    printf ("%d\n", fatorial);

    return 0;
}