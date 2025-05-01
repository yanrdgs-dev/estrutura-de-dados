#include <stdio.h>
#include <string.h>

int soma_digitos(char *num) {
    int sum = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        sum += num[i] - '0';
    }
    return sum;
}

int grau9(char *num, int depth) {
    int sum = soma_digitos(num);

    if (sum == 9) return depth + 1;
    else if (sum % 9 != 0) return 0;

    char sum_str[20];
    sprintf(sum_str, "%d", sum);

    return grau9(sum_str, depth + 1);
}

int main() {
    char num[1010];
    while (scanf("%s", num) == 1) {
        if (strlen(num) == 1 && num[0] == '0') break;

        int grau = grau9(num, 0);

        if (grau > 0) {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, grau);
        } else {
            printf("%s is not a multiple of 9.\n", num);
        }
    }
}