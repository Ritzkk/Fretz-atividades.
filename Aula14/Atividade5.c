#include <stdio.h>

int main(void) {
    char c;

    printf("Digite um caractere: ");
    scanf_s(" %c", &c);

    printf("O codigo ASCII de '%c' e: %d\n", c, c);

    return 0;
}