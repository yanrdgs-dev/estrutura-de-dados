#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void append(celula *le, celula *item) {
    celula *p = le;
    while (p->prox != NULL) p = p->prox;

    p->prox = item;
    item->prox = NULL;
}

void mescla_listas(celula *l1, celula *l2, celula *l3) {
    celula *atual_l1 = l1->prox;
    celula *atual_l2 = l2->prox;
    while (atual_l1 != NULL && atual_l2 != NULL) {
        if (atual_l1->dado <= atual_l2->dado) {
            celula *next = atual_l1->prox;
            append(l3, atual_l1);
            atual_l1 = next;
        } else {
            celula *next = atual_l2->prox;
            append(l3, atual_l2);
            atual_l2 = next;
        }
    }
    while (atual_l1 != NULL) {
        celula *next = atual_l1->prox;
        append(l3, atual_l1);
        atual_l1 = next;
    }
    while (atual_l2 != NULL) {
        celula *next = atual_l2->prox;
        append(l3, atual_l2);
        atual_l2 = next;
    }
}