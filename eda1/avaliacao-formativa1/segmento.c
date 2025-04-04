#include <stdio.h>

int encaixa(int a, int b) {
    while (b != 0 && a % 10 == b % 10) {
        a = a / 10;
        b = b / 10;
    }

    if (b == 0) {
        return 1;
    } else {
        return 0;
    }
}

int segmento(int a, int b) {
    int maior, menor, check;

    if (a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    check = 0;

    while (maior >= menor) {
        if (encaixa(maior, menor) == 1) {
            check = 1;
        }

        maior = maior / 10;
    }
    if (check == 1) {
        return 1;
    } else {
        return 0;
    }
}