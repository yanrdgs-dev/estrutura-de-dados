#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b, int *a_idx, int *b_idx) {
    int temp = *a;
    *a = *b;
    *b = temp;
    
    int temp_idx = *a_idx;
    *a_idx = *b_idx;
    *b_idx = temp_idx;
}

int partition(int *v, int *indices, int e, int d) {
    int pivot = v[d];
    int j = e;
    for (int k = e; k < d; k++) {
        if (v[k] <= pivot) {
            swap(&v[k], &v[j], &indices[k], &indices[j]);
            j++;
        }
    }
    swap(&v[j], &v[d], &indices[j], &indices[d]);
    return j;
}

void quicksort(int *v, int *indices, int e, int d) {
    if (e >= d) return;
    int p = partition(v, indices, e, d);
    quicksort(v, indices, e, p - 1);
    quicksort(v, indices, p + 1, d);
}

int binary_search(int *v, int *indices, int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v[mid] == x) {
            return indices[mid]; 
        } else if (v[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *v = malloc(n * sizeof(int));
    int *indices = malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        indices[i] = i;
    }

    quicksort(v, indices, 0, n - 1); 

    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        int idx = binary_search(v, indices, n, x);
        printf("%d\n", idx);
    }

    free(v);
    free(indices);
}
