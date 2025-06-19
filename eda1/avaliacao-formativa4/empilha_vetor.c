#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int *dados;
    int N, topo;
} pilha;

int empilha(pilha *p, int x) {
    if (p->topo >= p->N) {
        int novo_n = p->N * 2;
        int *novo_dados = realloc(p->dados, novo_n * sizeof(int));
        if (novo_dados == NULL) return 0;
        p->dados = novo_dados;
        p->N = novo_n;
    }

    p->dados[p->topo++] = x;
    return 1;
}