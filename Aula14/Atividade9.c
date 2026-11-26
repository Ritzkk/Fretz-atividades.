#include <stdio.h>

int main(void) {
    float f, c;

    printf("Digite a temperatura em Fahrenheit (F): ");
    scanf_s("%f", &f);

    c = (f - 32.0f) * (5.0f / 9.0f);

    printf("Temperatura em Celsius: %.2f C\n", c);

    return 0;
}