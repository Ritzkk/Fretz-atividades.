#include <stdio.h>
#include <math.h>

int main(void) {
    int n, d, limite;
    printf("Numero? ");
    scanf_s("%d", &n);

    if (n <= 1) {
        puts("Nao e primo!");
        return 0;
    }

    limite = (int)ceil(sqrt((double)n));
    for (d = 2; d <= limite && d < n; d++) {
        if (n % d == 0) break;
    }

    if (d > limite || d == n) puts("E primo!");
    else puts("Nao e primo!");

    return 0;
}