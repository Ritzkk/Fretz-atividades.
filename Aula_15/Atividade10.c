#include <stdio.h>

int main(void) {
    float x, y;
    char o;
    printf("Expressao?");
    scanf_s("%f %c %f", &x, &o, 1, &y);
    switch (o) {
    case '+': printf("Valor = %.2f\n", x + y); break;
    case '-': printf("Valor = %.2f\n", x - y); break;
    case '*': printf("Valor = %.2f\n", x * y); break;
    case '/':
        if (y == 0) {
            printf("Erro: Divisao por zero!\n");
        }
        else {
            printf("Valor = %.2f\n", x / y);
        }
        break;
    default: printf("Operador invalido: %c\n", o);
    }
    return 0;
}