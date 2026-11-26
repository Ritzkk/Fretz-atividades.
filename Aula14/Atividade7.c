int main(void) {
    float nota1, nota2, media;
    printf("Digite suas notas:");
    scanf_s("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2.0f;

    printf("Media: %.2f\n", media);

    return 0;
}