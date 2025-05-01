#include <stdio.h>

void print_tracos(int n) {
    printf(".");
    for (int i = 0; i < n; i++) {
        printf("-");
    }
    printf("\n");
}

void regua(int n) {
    if (n == 0) return;

    regua(n - 1);
    print_tracos(n);
    regua(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    regua(n);
}