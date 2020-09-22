#include <stdio.h>

int main (){
    int numRecebido;

    scanf("%d", &numRecebido);

    if (numRecebido % 2 == 0){
        printf ("É Par\n");
    }
    else {
        printf ("É Impar\n");
    }

    return 0;
}