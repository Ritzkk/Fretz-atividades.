#include <stdio.h>

int main(void) {
    int n, temp, soma = 0;

    printf("Digite o numero natural (ate 6 digitos): ");
    scanf_s("%d", &n);

    temp = n;
    while (temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }

    int dv = soma % 10;
    printf("Numero de conta: %06d-%d\n", n, dv);

    return 0;
}