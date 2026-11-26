#include <stdio.h>

int main(void) {
    int placa, final;

    printf("Digite o numero da placa (sem as letras): ");
    scanf_s("%d", &placa);

    final = placa % 10;

    switch (final) {
    case 1:
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
    case 4:
        printf("Terca-feira\n");
        break;
    case 5:
    case 6:
        printf("Quarta-feira\n");
        break;
    case 7:
    case 8:
        printf("Quinta-feira\n");
        break;
    case 9:
    case 0:
        printf("Sexta-feira\n");
        break;
    default:
        printf("Numero invalido.\n");
        break;
    }

    return 0;
}