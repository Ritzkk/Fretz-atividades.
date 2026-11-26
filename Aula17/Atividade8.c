#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    int col = 40, lin = 12;
    int rastro = 1;
    int cores[] = { 31, 32, 33, 34, 35, 36, 91, 92, 93, 94, 95, 96 };
    int idxCor = 0;

    while (1) {
        if (rastro) {
            printf("\x1b[%d;%dH\x1b[%dm*\x1b[0m", lin, col, cores[idxCor]);
        } else {
            printf("\x1b[%d;%dH ", lin, col);
        }

        switch (toupper(_getch())) {
            case 'W': if (lin > 1) lin--; break;
            case 'S': if (lin < 24) lin++; break;
            case 'D': if (col < 80) col++; break;
            case 'A': if (col > 1) col--; break;
            case 'R': rastro = !rastro; break;
            case 'C': idxCor = (idxCor + 1) % 12; break;
            case 'F': exit(0);
        }
    }

    return 0;
}