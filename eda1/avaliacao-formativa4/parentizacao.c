#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char dado;
    struct celula *prox;
} celula;

celula *cria_pilha() {
    celula *pilha = malloc(sizeof(celula));
    pilha->prox = NULL;
    return pilha;
}

int empilha(celula *p, char x) {
    celula *novo = malloc(sizeof(celula));
    if (novo == NULL) return 1;
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}

celula *desempilha(celula *p) {
    if (p->prox == NULL) return NULL;
    celula *popped = p->prox;
    p->prox = popped->prox;
    return popped;
}

int check_parentizacao(char *expression) {
    celula *p = cria_pilha();
    int i = 0;

    while (expression[i] != '\0') {
        if (expression[i] == '{' || expression[i] == '[' || expression[i] == '(') empilha(p, expression[i]);
        else if (expression[i] == ')') {
            celula *popped = desempilha(p);
            if (popped == NULL || popped->dado != '(') return 0;
        } else if (expression[i] == ']') {
            celula *popped = desempilha(p);
            if (popped == NULL || popped->dado != '[') return 0;
        } else if (expression[i] == '}') {
            celula *popped = desempilha(p);
            if (popped == NULL || popped->dado != '{') return 0;
        }

        i++;
    }

    if (desempilha(p) != NULL) return 0;
    else return 1;
}

int main() {
    char *expression = malloc(501 * sizeof(char));
    scanf("%s", expression);
    if (check_parentizacao(expression)) printf("sim\n");
    else printf("nao\n");
}