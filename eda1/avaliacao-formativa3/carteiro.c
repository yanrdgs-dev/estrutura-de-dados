#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numero;
    int idx;
} casa;

int comparar(const void *a, const void *b) {
    casa *ca = (casa *)a;
    casa *cb = (casa *)b;

    if (ca->numero < cb->numero) return -1;
    if (ca->numero > cb->numero) return 1;
    return 0;
}

int busca_idx(casa *h, int n, int x) {
    int e = 0, d = n - 1;
    while (e <= d) {
        int m = (e + d) / 2;
        if (h[m].numero == x) {
            return h[m].idx;
        } else if (h[m].numero < x) {
            e = m + 1;
        } else {
            d = m - 1;
        }
    }

    return -1;
}


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    casa *h = malloc(n * sizeof(casa));
    int *p = malloc(m * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i].numero);
        h[i].idx = i;
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &p[i]);
    }

    qsort(h, n, sizeof(casa), comparar);

    long long total_passos = 0;
    int pos_atual = 0;
    
    for (int i = 0; i < m; i++) {
        int destino = busca_idx(h, n, p[i]);
        int passos = abs(pos_atual - destino);
        total_passos += passos;
        pos_atual = destino;
    }

    printf("%lld\n", total_passos);

    free(h);
    free(p);

}
