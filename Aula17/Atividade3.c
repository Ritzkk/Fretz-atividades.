#include <stdio.h>

int main(void) {
    int n, soma = 0, impar = 1;

    printf("Digite um numero natural: ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        soma += impar;
        impar += 2;
    }

    printf("Quadrado de %d = %d\n", n, soma);
    return 0;
}