#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fat = 1;

    printf("Digite um numero natural: ");
    scanf_s("%d", &n);

    for (int i = 2; i <= n; i++) {
        fat *= i;
    }

    printf("%d! = %llu\n", n, fat);
    return 0;
}