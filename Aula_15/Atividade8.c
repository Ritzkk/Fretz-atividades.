#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;

    printf("Digite os coeficientes a, b e c: ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
    {
        printf("O coeficiente \"a\" deve ser diferente de zero.\n");
    }
    else
    {
        delta = (b * b) - (4 * a * c);

        if (delta < 0)
        {
            printf("Nao existem raizes reais.\n");
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Existe uma raiz real: x = %.2f\n", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Existem duas raizes reais:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}