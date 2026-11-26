#include <stdio.h>

int main()
{
    float p1, p2, media;
    printf("Digite suas notas = ");
    scanf_s("%f %f", &p1, &p2);
    media = (p1 + p2) / 2;
    if (media >= 6)
    {
        puts("Aprovado!");
    }
    else {
        puts("Reprovado.");
    }

    return 0;
}