#include <stdio.h>

int main(void) {
    int cores[] = { 90, 34, 32, 36, 31, 35, 33, 37, 90, 94, 92, 96, 91, 95, 93, 97 };

    for (int c = 0; c <= 15; c++) {
        printf("\x1b[%dmCor %d\x1b[0m\n", cores[c], c);
    }

    return 0;
}