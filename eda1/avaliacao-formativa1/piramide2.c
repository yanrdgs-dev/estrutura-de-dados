#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int espacos = n - i - 1; espacos > 0; espacos--) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}