#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void insertion(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[n] < arr[j-1]) {
            int aux = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = aux;
            j--; 
        }
    }
}

int main() {
    int n;
    printf("insira o tamanho do arr: \n");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    printf("insira os valores do arr: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("array sem ordenar: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    insertion(arr, n);
    printf("array ordenado: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

