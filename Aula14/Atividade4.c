#include <stdio.h>

int main(void) {
    int numero;

    printf("Introduza um numero inteiro em base 10: ");
    scanf_s("%d", &numero);

    printf("Em hexadecimal (minusculas): %x\n", numero);
    printf("Em hexadecimal (maiusculas): %X\n", numero);

    return 0;
}