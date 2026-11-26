#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int x = 1, y = 1, dx = -1, dy = -1;
    int cores[] = { 31, 32, 33, 34, 35, 36, 91, 92, 93, 94, 95, 96 };
    int corAtual = 97;

    srand((unsigned int)time(NULL));

    do {
        int corPonto = corAtual;

        printf("\x1b[%d;%dH\x1b[%dmO\x1b[0m\b", y, x, corPonto);
        for (volatile long delay = 0; delay < 30000000L; delay++) {
        }
        printf("\x1b[%d;%dH\x1b[%dm.\x1b[0m", y, x, corPonto);

        int mudou = 0;
        if (x == 1 || x == 80) {
            dx = -dx;
            mudou = 1;
        }
        if (y == 1 || y == 24) {
            dy = -dy;
            mudou = 1;
        }
        if (mudou) {
            corAtual = cores[rand() % 12];
        }

        x += dx;
        y += dy;
    } while (!_kbhit());

    printf("\x1b[0m\n");
    return 0;
}