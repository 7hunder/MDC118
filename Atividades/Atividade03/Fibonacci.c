#include <stdio.h>

int main (){

    int fib = 1;

    for (int i = 1; i <= 10; i++){
        printf ("%d ", fib);
        fib = fib + fib;
    }
    printf ("\n");

    return 0;
}