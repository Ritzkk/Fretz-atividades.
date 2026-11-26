#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso (kg) e a altura (m): ");
    scanf_s("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Magra\n");
    }
    else if (imc <= 30.0) {
        printf("Normal\n");
    }
    else {
        printf("Gordin\n");
    }

    return 0;
}