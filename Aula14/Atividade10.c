#include <stdio.h>

int main(void) {
    float xp, yp, xq, yq, dx, dy, soma, raiz;

    printf("Digite as coordenadas de P (xp yp): ");
    scanf_s("%f %f", &xp, &yp);

    printf("Digite as coordenadas de Q (xq yq): ");
    scanf_s("%f %f", &xq, &yq);

    dx = xq - xp;
    dy = yq - yp;
    soma = dx * dx + dy * dy;

    if (soma == 0.0f) {
        raiz = 0.0f;
    }
    else {
        raiz = soma / 2.0f;
        for (int i = 0; i < 20; i++) {
            raiz = 0.5f * (raiz + soma / raiz);
        }
    }

    printf("Distancia entre P e Q: %.2f\n", raiz);

    return 0;
}