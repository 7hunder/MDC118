#include <stdio.h>

int main()
{
    int nota = 4;

    /* sintaxe completa */
    // switch equivale a if-else-if so comprando igualdade
    switch (nota) 
    {
    case 10: // igualdade 
        printf("%s\n", "eita passei com 10");
        break;
    case 9:
        printf("%s\n", "eita passei com 9");
    case 4:
        printf("%s\n", "eita fiquei de recuperacao com 4");
    default:
        printf("%s\n", "eita to lascado");
        break;
    }

    return 0;
}