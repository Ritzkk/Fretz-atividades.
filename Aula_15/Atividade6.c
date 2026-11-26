#include <stdio.h>

int main()
{
    float p1, p2, media, maior;
    int faltas;
    printf("Digite suas notas = ");
    scanf_s("%f %f", &p1, &p2);
    printf("Digite o numero de faltas:");
    scanf_s("%d", &faltas);
    maior = (p1 > p2) ? p1 : p2;
    printf("Maior nota e: %.2f \n", maior);
    media = (p1 + p2) / 2;
    if (media >= 6 && faltas <=5)
    {
        puts("Aprovado!");
    }
    else {
        puts("Reprovado.");
    }

    return 0;
}