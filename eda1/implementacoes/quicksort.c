#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int partition(int *v, int e, int d) {
    int c = v[d];
    int j = e;

    for (int k = e; k < d; k++) {
        if (v[k] <= c) {
            swap(&v[k], &v[j]);
            j++;
        }
    }
    swap(&v[j], &v[d]);
    return j;
}

void quicksort(int *v, int e, int d) {
    if (e >= d) return;
    else {
        int p = partition(v, e, d);

        quicksort(v, e, p - 1);
        quicksort(v, p + 1, d);
    }
}

int main(void) {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("\nDigite os valores do vetor: ");
    int *v = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("\nVetor antes da ordenação: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");

    printf("Vetor após ordenação: [ ");
    quicksort(v, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");

    free(v);
}
