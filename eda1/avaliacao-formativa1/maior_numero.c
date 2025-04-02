#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    int p;
    int f;
    scanf("%d %d", &n, &p);
    scanf("%d", &f);
    int potencia = pow(n, p);
    int fatorial = factorial(f);

    if (potencia > fatorial) {
        printf("Lucas\n");
    } else {
        printf("Pedro\n");
    }
}