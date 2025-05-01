#include <stdio.h>

void troca_xy(char *str) {
    if (*str == '\0') return;
    if (*str == 'x') *str = 'y';

    troca_xy(str + 1);
}

int main() {
    char str[81];
    scanf("%s", str);

    troca_xy(str);
    printf("%s\n", str);
}