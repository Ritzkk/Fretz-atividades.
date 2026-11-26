#include <stdio.h>

int main(void) {
    int opcao;
    double saldo = 1000.00, valor;

    do {
        printf("\n1 - Deposito\n2 - Saque\n3 - Saldo\n4 - Sair\nEscolha: ");
        scanf_s("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Valor do deposito: R$ ");
                scanf_s("%lf", &valor);
                if (valor > 0.0) {
                    saldo += valor;
                    printf("Deposito realizado.\n");
                } else {
                    printf("Valor invalido.\n");
                }
                break;

            case 2:
                printf("Valor do saque: R$ ");
                scanf_s("%lf", &valor);
                if (valor <= 0.0) {
                    printf("Valor invalido.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente! Saldo atual: R$ %.2f\n", saldo);
                } else {
                    saldo -= valor;
                    printf("Saque realizado.\n");
                }
                break;

            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;

            case 4:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 4);

    return 0;
}