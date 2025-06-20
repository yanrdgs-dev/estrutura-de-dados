#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
  int dado;
  struct celula *prox;
} celula;

void insere_inicio(celula *le, int x) {
  celula *novo = malloc(sizeof(celula));
  novo->prox = le->prox;
  le->prox = novo;
  novo->dado = x;
}

void insere_antes(celula *le, int x, int y) {
  celula *p;

  for (p = le->prox; p->prox != NULL; p = p->prox) {
    if (p->prox->dado == y) {
      celula *novo = malloc(sizeof(celula));
      novo->prox = p->prox;
      p->prox = novo;
      novo->dado = x;

      return;
    }
  }

  celula *novo = malloc(sizeof(celula));
  novo->prox = p->prox;
  p->prox = novo;
  novo->dado = x;
}