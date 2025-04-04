#include <stdio.h>

void conversor_romano (int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (num) {
        while (num / decimal[i]) {
            printf("%s", simbolos[i]);
            num = num - decimal[i];
        }
        i++;
    }
    printf("\n");
}

int main() {
    int total_numeros, num;

    scanf("%d", &total_numeros);
    for (int i = 0; i < total_numeros; i++) {
        scanf("%d", &num);
        conversor_romano(num);
    }
}