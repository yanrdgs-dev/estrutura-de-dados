#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int empilha(celula *p, int x) {
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) return 0;
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
    return 1;
}