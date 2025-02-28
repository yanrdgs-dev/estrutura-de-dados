#include <stdio.h>

void selection_sort(int arr[], int arr_len) { // função para ordenar array, toma um array e o seu tamanho como parâmetro
    for (int i = 0; i < arr_len; i++) { // itera sobre o array,
        int min_idx = i; // presume que o item atual é o menor item do array

        for (int j = i + 1; j < arr_len; j++) { // itera novamente sobre o array,
            if (arr[j] < arr[min_idx]) { // se o item atual for menor que o menor item do array, 
                min_idx = j; // o item atual vira o menor item do array
            }
        }

        int tmp = arr[min_idx]; // swap entre os itens do array
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}

void print_arr(int arr[], int arr_len) { // função para printar o array, toma um array e o seu tamanho como parâmetro
    for (int i = 0; i < arr_len; i++) { // itera sobre o array, printando ele
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main (void) {
    int array[5] = {10, 5, 3, 8, 4}; // inicializa o array
    int array_len = sizeof(array) / sizeof(array[0]); // calcula o tamanho do array

    printf("--- Array sem ordenação ---\n"); 
    print_arr(array, array_len); // array sem ordenação
    printf("--- Array após ordenação ---\n");
    selection_sort(array, array_len); // ordena array
    print_arr(array, array_len); // array com ordenação
}