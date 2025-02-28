#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node_t;

typedef struct {
    node_t* head;
    node_t* tail;
} linked_list;

void init_list(linked_list* list) {
    list->head = NULL;
    list->tail = NULL;
}

void insert_at_beginning(linked_list* list, int data) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;

    if (list->tail == NULL) {
        list->tail = new_node;
    }
}

void delete_at_end(linked_list* list) {
    if (list->head == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    if (list->head == list-> tail) {
        free(list->head);
        list->head = list->tail = NULL;
        return;
    }

    node_t* current = list->head;

    while (current->next != list->tail) {
        current = current->next;
    }

    current->next = NULL;
    list->tail = current;
}

void print_list(linked_list* list) {
    node_t* current = list->head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main(void) {
    linked_list list;
    init_list(&list);

    insert_at_beginning(&list, 1);
    insert_at_beginning(&list, 2);
    insert_at_beginning(&list, 3);
    insert_at_beginning(&list, 4);
    insert_at_beginning(&list, 5);

    printf("--- Linked List ---\n");
    print_list(&list);

    delete_at_end(&list);
    delete_at_end(&list);
    printf("--- Linked List após deletar os dois últimos itens ---\n");
    print_list(&list);
}