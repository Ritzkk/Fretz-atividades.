#include <stdio.h>

int main(void) {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf_s("%f", &distancia);

    printf("Digite o total de combustivel gasto (litros): ");
    scanf_s("%f", &litros);

    if (litros <= 0.0f) {
        printf("A quantidade de combustivel deve ser maior que zero.\n");
        return 1;
    }

    consumo = distancia / litros;

    printf("Consumo medio: %.2f km/l\n", consumo);

    return 0;
}