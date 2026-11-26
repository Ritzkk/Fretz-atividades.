#include <stdio.h>

int main(void) {
    int placa, final;

    printf("Digite o numero da placa (sem as letras): ");
    scanf_s("%d", &placa);

    final = placa % 10;

    if (final == 1 || final == 2) {
        printf("Segunda-feira\n");
    }
    else if (final == 3 || final == 4) {
        printf("Terca-feira\n");
    }
    else if (final == 5 || final == 6) {
        printf("Quarta-feira\n");
    }
    else if (final == 7 || final == 8) {
        printf("Quinta-feira\n");
    }
    else if (final == 9 || final == 0) {
        printf("Sexta-feira\n");
    }
    else {
        printf("Numero invalido.\n");
    }

    return 0;
}