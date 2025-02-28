#include <stdio.h>
#include <stdlib.h>

typedef struct Node { // Declarando tipo node_t (tipo do struct Node, que é os dados do Node e o próximo node (ponteiro para ele, queremos apenas o endereço))
    int data; // Dados do node
    struct Node* next; // Ponteiro para o próximo Node
} node_t; 

typedef struct { // tipo e struct para armazenar a cabeça e o rabo da linked list
    node_t* head; // ponteiro para a cabeça da lista
    node_t* tail; // ponteiro para o rabo da lista, ambos com tipo node_t 
} linked_list;

void init_list(linked_list* list) { // inicializa a lista
    list->head = NULL; // seta cabeça da lista como NULL
    list->tail = NULL; // seta o tail da lista como NULL (lembrando que: cabeça vazia == lista vazia)
}

void insert_at_beginning(linked_list* list, int data) { // inserir no inicio, toma a lista e os dados para o novo node como parâmetro
    node_t* new_node = (node_t*)malloc(sizeof(node_t)); // inicializa um novo node. malloc(sizeof()) para alocar memória dinamicamente, (node_t*) casta o ponteiro do malloc para um tipo correto
    new_node->data = data; // adiciona os dados do parâmetro pro new_node
    new_node->next = list->head; // como é inserido no início, o next desse new_node se torna a cabeça antiga da lista
    list->head = new_node; // a nova cabeça da lista é o new_node

    if (list->tail == NULL) { // se o rabo da lista estiver vazio
        list->tail = new_node; // lista possui apenas um item, logo a cabeça == rabo da lista;
    }
}

void delete_at_end(linked_list* list) { // deleta o último item da lista, toma a lista como parâmetro
    if (list->head == NULL) { // Se a cabeça da lista estiver vazia, consequentemente a lista está vazia.
        printf("Lista vazia.\n");
        return;
    }

    if (list->head == list-> tail) { // Se a cabeça da lista for igual ao rabo da lista;
        free(list->head); // limpa a memória associada ao malloc() da cabeça da lista
        list->head = list->tail = NULL; // os elementos da lista viram NULL, lista vazia
        return;
    }

    node_t* current = list->head; // seta um novo ponteiro para o atual node que está sendo percorrido

    while (current->next != list->tail) { // enquanto o próximo node dessa lista (baseado no ponteiro do node atual) for diferente do rabo da lista,
        current = current->next; // o atual se torna o próximo.
    }

    free(list->tail); // limpa a memória associada ao malloc() do rabo da lista
    current->next = NULL; // Então, já que o próximo node é o rabo da lista, seta ele como NULL, pois foi deletado,
    list->tail = current; // O novo rabo da lista se torna o current.
}

void print_list(linked_list* list) { // Imprime a lista, toma a lista como parâmetro.
    node_t* current = list->head; // Mesmo esquema da função acima, seta um novo ponteiro para o atual node que está sendo percorrido.
    while (current != NULL) { // Enquanto o current for diferente de NULL, ou seja, enquanto o current não for o fim da lista,
        printf("%d -> ", current->data); // printa os dados do current
        current = current->next; // o novo current vira o próximo node do node current
    }
    printf("NULL\n"); // Fim do loop, printa NULL apenas para concisão.
}

int main(void) {
    linked_list list; // declara list
    init_list(&list); // inicializa a list, passando o endereço (&) para que modifique o head e o tail diretamente.

    insert_at_beginning(&list, 1); // inserção dos dados, novamente passando o endereço (&)
    insert_at_beginning(&list, 2); // todas as funções esperam o ponteiro de uma lista, então passamos o endereço para as alterações serem diretamente nela
    insert_at_beginning(&list, 3);
    insert_at_beginning(&list, 4);
    insert_at_beginning(&list, 5);

    printf("--- Linked List ---\n"); // Efetua os testes de impressão 
    print_list(&list);

    delete_at_end(&list);
    delete_at_end(&list);
    printf("--- Linked List após deletar os dois últimos itens ---\n"); // Impressão após deletar 2 itens
    print_list(&list);
}