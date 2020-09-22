#include <stdio.h>

int main() {
    int x = 10;
    int y = 20; 
    int z;

    /* operador soma */
    z = x + y;
    printf("%d\n", z);
    printf("%d\n", x + y);

    /* operador subtracao */
    z = x - y;
    printf("%d\n", z);

    /* operador multiplicacao */
    z = x * y;
    printf("%d\n", z);

    /* operador divisao */
    z = x / y;
    printf("%d\n", z);
    
    printf("%lf\n", (double) x / y); // conversao explicita

    double w = x / y; // conversao implicita
    printf("%lf\n", w); 

    w = x * 1.0 / y;  // conversao implicita
    printf("%lf\n", w); 

    /* operador resto da divisao */
    z = x % y;   // 10 / 20 => resultado 0 com resto 10
    printf("%d\n", z);

    // 4 % 2 == 0?? par
    // 3 % 2 == 0?? impar

    /* operador de incremento */
    z = x++; // x = x + 1, usa 1o o valor de x, depois incrementa;
    // x era 10, depois x passou para 11; 
    printf("%d\n", z); 
    z = ++x; // incrementa x, depois usa o valor
    // x era 11 e passo para 12;
    printf("%d\n", z); 

    /* operador de decremento */
    printf("%d\n", x--); // x = x - 1, usa 1o o valor de x, depois incrementa;
    printf("%d\n", --x); // incrementa x, depois usa o valor

    /* forma concatenada */
    x += 1; // x = x + 1;
    x -= 1; // x = x - 1;
    x *= 1; // x = x * 1;
    x /= 1; // x = x / 1;
    x %= 1; // x = x % 1;

    return 0;
}
