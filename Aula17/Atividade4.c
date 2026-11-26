#include <stdio.h>

int main(void) {
    double x, pot = 1.0;
    int n;

    printf("Digite a base real (x): ");
    scanf_s("%lf", &x);
    printf("Digite o expoente natural (n): ");
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        pot *= x;
    }

    printf("%.4f ^ %d = %.4f\n", x, n, pot);
    return 0;
}