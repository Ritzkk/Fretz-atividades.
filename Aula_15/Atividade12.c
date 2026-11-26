#include <stdio.h>

int main(void) {
    int dia, mes, ano, soma1, soma2, resto;

    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf_s("%d/%d/%d", &dia, &mes, &ano);

    soma1 = (dia * 100 + mes) + ano;
    soma2 = (soma1 / 100) + (soma1 % 100);
    resto = soma2 % 5;

    switch (resto) {
    case 0: printf("Perfil: Timido\n"); break;
    case 1: printf("Perfil: Sonhador\n"); break;
    case 2: printf("Perfil: Paquerador\n"); break;
    case 3: printf("Perfil: Atraente\n"); break;
    case 4: printf("Perfil: Irresitivel\n"); break;
    }

    return 0;
}