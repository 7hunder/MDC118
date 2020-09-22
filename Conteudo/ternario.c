#include <stdio.h>

int main() {
    int x = 15;
    int y = 20;

    printf("%d\n", x % 2 == 0); // 1 é impar
    printf("%d\n", y % 2 == 0); // 0 é par

    /* operador ternario (expressao) ? verdadeiro : falso */
    printf("%s\n", x % 2 == 0 ? "é par" : "é impar"); // 1 é impar
    printf("%s\n", y % 2 == 0 ? "é par" : "é impar"); // 0 é par

    float desconto = y > 100 ? 0.5 : 0;
    printf("%f\n", desconto);

    return 0;
}
