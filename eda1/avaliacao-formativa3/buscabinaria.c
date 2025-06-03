#include <stdio.h>
#include <stdlib.h>

int binary_search(int *v, int n, int x) {
    int e = -1, d = n;
    while (e < d - 1) {
        int m = (e + d) / 2;
        if (x > v[m]) e = m;
        else d = m;
    }

    return d;
}

int main() {
    int m, n;
    scanf("%d %d", &n, &m);

    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        v[i] = num;
    }

    for (int i = 0; i < m; i++) {
        int num;
        scanf("%d", &num);
        int idx = binary_search(v, n, num);
        printf("%d\n", idx);
    }
}
