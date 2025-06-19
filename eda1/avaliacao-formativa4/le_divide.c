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

void divide_lista(celula *l, celula *l1, celula *l2) {
    celula *atual_l = l->prox;
    while(atual_l != NULL) {
        if (atual_l->dado % 2 == 0) { // ve se atual_l é par, se for append(l2)
            celula *next = atual_l->prox;
            append(l2, atual_l);
            atual_l = next;
        } else {
            celula *next = atual_l->prox;
            append(l1, atual_l);
            atual_l = next;
        }
    }
}