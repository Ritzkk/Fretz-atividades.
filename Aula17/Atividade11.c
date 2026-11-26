#include <stdio.h>

int main(void) {
    int num, maior, menor;

    printf("Digite numeros naturais (0 encerra):\n");
    scanf_s("%d", &num);

    if (num == 0) {
        printf("Nenhum numero informado antes do 0.\n");
        return 0;
    }

    maior = menor = num;

    while (1) {
        scanf_s("%d", &num);
        if (num == 0) {
            break;
        }
        if (num > maior) maior = num;
        if (num < menor) menor = num;
    }

    printf("Maximo: %d | Minimo: %d\n", maior, menor);
    return 0;
}