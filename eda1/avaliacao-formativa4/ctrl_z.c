#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct celula {
    char *string;
    struct celula *prox;
} celula;

celula *cria_pilha() {
    celula *pilha = malloc(sizeof(celula));
    pilha->prox = NULL;
    return pilha;
}

int empilha(celula *p, char *x) {
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) return 1;
    novo->string = x;
    novo->prox = p->prox;
    p->prox = novo;
}

celula *desempilha(celula *p) {
    if (p->prox == NULL) return NULL;
    celula *popped = p->prox;
    p->prox = popped->prox;
    return popped;
}


int main() {
    char *op = malloc(101 * sizeof(char));
    celula *stack = cria_pilha();

    char inserir[] = "inserir";
    char desfazer[] = "desfazer";

    while (scanf("%s", op) != EOF) {
        if (strcmp(op, inserir) == 0) {
            char str[101];
            scanf(" %[^\n]", str);
            char *cpy = malloc(strlen(str) + 1);
            strcpy(cpy, str);
            empilha(stack, cpy);
        } else if (strcmp(op, desfazer) == 0) {
            celula *popped = desempilha(stack);
            if (popped == NULL) {
                printf("NULL\n");
            } else {
                printf("%s\n", popped->string);
                free(popped->string);
                free(popped);
            }
        }
    }
}