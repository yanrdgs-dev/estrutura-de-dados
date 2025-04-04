#include <stdio.h>

int main(void) {
    int b, t;

    scanf("%d %d", &b, &t);

    int area_total = 160 * 70;
    int area_esquerda = (b + t) * 70 / 2;

    if (area_esquerda > area_total / 2) {
        printf("1\n");
    } else if (area_esquerda < area_total / 2) {
        printf("2\n");
    } else {
        printf("0\n");
    }
}