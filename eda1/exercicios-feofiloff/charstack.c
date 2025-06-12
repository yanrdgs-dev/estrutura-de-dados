#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int t, cap;
    char *v;

} stack_t;

stack_t *create_stack(int cap);

int push(stack_t *stack, char c);

char pop(stack_t *stack);

char peek(stack_t *stack);

int is_full(stack_t *stack);

int is_empty(stack_t *stack);


stack_t *create_stack(int cap) {
    stack_t *stack = (stack_t *)malloc(sizeof(stack_t));
    stack->cap = cap;
    stack->t = 0;
    stack->v = (char *)malloc(cap * sizeof(char));

    return stack;
}

int push(stack_t *stack, char c) {
    if (is_full(stack) == 1) {
        return 1;
    } else {
        stack->v[stack->t++] = c;
        return 0;
    }
}

char pop(stack_t *stack) {
    if (is_empty(stack) == 1) {
        printf("Stack is empty. Cannot pop.\n");
        return '\0';
    } else {
        return stack->v[--stack->t];
    }
}

char peek(stack_t *stack) {
    if (is_empty(stack) == 1) {
        printf("Stack is empty. Cannot peek.\n");
        return '\0';
    }
    return stack->v[stack->t - 1];
}

int is_full(stack_t *stack) {
    if (stack->t >= stack->cap) return 1;        
    else return 0;
}

int is_empty(stack_t *stack) {
    if (stack->t <= 0) return 1;
    else return 0;
}