#include <stdio.h>

int main(void) {
    int n, termial = 0;

    printf("Digite um numero natural: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        termial += i;
    }

    printf("Termial de %d = %d\n", n, termial);
    return 0;
}