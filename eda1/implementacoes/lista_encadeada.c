#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *criar_lista() {
    celula *le = malloc(sizeof(celula));
    le->prox = NULL;

    return le;
}

void inserir_celula(celula *le, int x) {
    celula *novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

int remover_celula(celula *le) {
    celula *lixo = le->prox;
    le->prox = lixo->prox;
    int x = lixo->dado;
    free(lixo);

    return x;
}

void imprimir_lista(celula *le) {
    for (celula *ptr = le->prox; ptr != NULL; ptr = ptr->prox) {
        printf("%d ", ptr->dado);
    } printf("\n");
}

int main() {
    celula *le = criar_lista();
    inserir_celula(le, 10);
    inserir_celula(le, 15);
    inserir_celula(le, 0);

    imprimir_lista(le);

    remover_celula(le);

    imprimir_lista(le);
}
