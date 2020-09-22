#include <stdio.h>

int main (int argc, char * argv[]) {
    int perimetro;
    int pi= 3.1416; 
    int raio;

    printf ("Digite o valor do raio: ");
    scanf ("%d", &raio);

    perimetro= 2 * pi * raio;

    printf ("O perimetro é: %d\n", perimetro);

    return 0;
}