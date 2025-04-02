#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int nivel_atual = i + 1;
        for (int j = 0; j <= i; j++) {
            if (nivel_atual >= 10) {
                printf("%d ", nivel_atual);
            } else {
                printf("0%d ", nivel_atual);
            }
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j >= 9) {
                printf("%d ", j+1);
            } else {
                printf("0%d ", j+1);
            }
        }
        printf("\n");
    }
}