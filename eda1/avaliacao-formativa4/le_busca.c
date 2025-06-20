#include <stdio.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

celula *busca(celula *le, int x) {
  celula *p = le->prox;
  while (p != NULL) {
    if (p->dado == x) {
      return p;
    } else {
      p = p->prox;
    }
  }

  return NULL;
}

celula *busca_rec(celula *le, int x) {
  if (le->prox == NULL) return NULL;
  if (le->prox->dado == x) return le->prox;

  return busca_rec(le->prox, x);
}
