#include <stdio.h>

int main (){
    int gigabytes;
    unsigned long int bytes;

    scanf ("%d", &gigabytes);
    bytes = gigabytes * 1073741824;

    printf ("%ld", bytes);

    return 0;
}