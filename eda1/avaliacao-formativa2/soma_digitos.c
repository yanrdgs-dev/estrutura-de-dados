#include <stdio.h> 

long long soma_digitos(long long n) {
    if (n == 0) return 0;
    return (n % 10) + soma_digitos(n / 10);
}

int main() {
    long long n, sum;

    scanf("%lld", &n);

    sum = soma_digitos(n);

    printf("%lld\n", sum);
}