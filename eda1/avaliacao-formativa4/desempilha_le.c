#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha(celula *p, int *y) {
    if (p->prox == NULL) return 0;
    celula *popped = p->prox;
    p->prox = popped->prox;
    *y = popped->dado;
    return 1;
}
