#include <stdio.h>

int main (){
    float desconto, valor;

    printf ("Digite valor a pagar: ");
    scanf ("%f", &valor);

    if (valor <= 100){
        desconto = valor * 0.01;
        valor = valor - desconto;
    }

    if (valor > 100.01 && valor < 500){
        desconto = valor * 0.05;
        valor = valor - desconto;
    }

    if (valor >= 500){
        desconto = valor * 0.1;
        valor = valor - desconto;
    }

    printf ("Valor com desconto: %f", valor);
    return 0;
}