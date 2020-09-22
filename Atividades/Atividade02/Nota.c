#include <stdio.h>

int main (){
    int nota;

    scanf ("%d", &nota);

    switch (nota) {
        case 5 :
            printf ("Ótimo\n");
            break;
        case 4 :
            printf ("Bom\n");
            break;
        case 3 :
            printf ("Suficiente\n");
            break;
        case 2 :
            printf ("Insufieciente\n");
            break;
        case 1 :
            printf ("Ruim\n");
            break;
    }

    return 0;
}