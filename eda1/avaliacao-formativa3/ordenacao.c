#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 999 

void insertion_sort(int *v, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && v[j] < v[j - 1]) {
            int tmp = v[j - 1];
            v[j - 1] = v[j];
            v[j] = tmp;
            j--;
        }
    }
}


int main() {
    int num;
    int v_size = 0;

    int *v = malloc(MAX_SIZE * sizeof(int));

    while (scanf("%d", &num) != EOF) {
        v[v_size] = num;
        v_size++;
    }

    insertion_sort(v, v_size);
    
    for (int i = 0; i < v_size - 1; i++) {
        printf("%d ", v[i]);
    }
    printf("%d\n", v[v_size - 1]);


    free(v);
}
