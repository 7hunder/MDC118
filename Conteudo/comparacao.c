#include <stdio.h>

int main()
{
    int x = 20;
    int y = 30;

    /* maior que */
    printf("x > y? %d\n", x > y); // 0 é falso e 1 verdadeiro

    /* menor que */
    printf("x < y? %d\n", x < y);

    /* igual a */
    printf("x = y? %d\n", x == y);

    /* maior ou igual */
    printf("x >= y? %d\n", x >= y);

    /* menor ou igual */
    printf("x <= y? %d\n", x <= y);

    /* diferente de */
    printf("x != y? %d\n", x != y); // ! operador logico negacao not

    return 0;
}
