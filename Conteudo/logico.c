#include <stdio.h>

int main()
{
    int x = 30;
    int y = 20;

    /* operador E */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y && x - 10 > y); // falso E qualquer coisa eh falso

    /* operador OU */
    printf("%d\n", x > y);
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y || x - 10 > y); // verdadeiro OU qualquer coisa eh verdadeiro

    /* operador NAO */
    printf("%d\n", !(x > y));
    printf("%d\n", !(x - 10 > y));
    printf("%d\n", !(x > y || x - 10 > y)); // verdadeiro OU qualquer coisa eh verdadeiro

    return 0;
}
