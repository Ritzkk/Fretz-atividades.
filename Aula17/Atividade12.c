#include <stdio.h>
#include <math.h>

int main(void) {
    double x;

    do {
        printf("Digite um numero real nao negativo: ");
        scanf_s("%lf", &x);
        if (x < 0.0) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (x < 0.0);

    printf("Raiz quadrada de %.4f = %.4f\n", x, sqrt(x));
    return 0;
}