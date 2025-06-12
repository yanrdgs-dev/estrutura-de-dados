#ifndef CHARSTACK_H
#define CHARSTACK_H

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

#endif