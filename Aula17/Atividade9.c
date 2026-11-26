#include <stdio.h>
#include <conio.h>

int main(void) {
    while (!_kbhit()) {
        printf("TESTE\n");
    }

    _getch();
    return 0;
}