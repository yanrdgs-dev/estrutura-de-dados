#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int *dados;
    int N, topo;
} pilha;

int pilha_vazia(pilha *p) {
    return p->topo <= 0;
}

int desempilha(pilha *p, int *y) {
    if (pilha_vazia(p)) return 0;

    int desempilhado = p->dados[--p->topo];
    *y = desempilhado;
    return 1;
}