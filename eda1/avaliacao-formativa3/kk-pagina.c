#include <stdio.h>
#include <stdlib.h>

int partition(long long *arr, int left, int right) {
    long long pivot = arr[right];
    int i = left - 1;
    
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            long long temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    i++;
    long long temp = arr[i];
    arr[i] = arr[right];
    arr[right] = temp;
    
    return i;
}

void quickselect(long long *arr, int left, int right, int k) {
    while (left < right) {
        int p = partition(arr, left, right);
        if (k == p) {
            return;
        } else if (k < p) {
            right = p - 1;
        } else {
            left = p + 1;
        }
    }
}

int compare(const void *a, const void *b) {
    long long aa = *(long long*)a;
    long long bb = *(long long*)b;
    if (aa < bb) return -1;
    if (aa > bb) return 1;
    return 0;
}

int main() {
    int N, P, X;
    scanf("%d %d %d", &N, &P, &X);
    long long *arr = NULL;
    if (N > 0) {
        arr = (long long *)malloc(N * sizeof(long long));
        for (int i = 0; i < N; i++) {
            scanf("%lld", &arr[i]);
        }
    }

    long long start_index = (long long)P * X;
    long long end_index = (long long)(P+1) * X - 1;

    if (start_index >= N) {
        if (arr) free(arr);
        return 0;
    }

    if (end_index >= N) {
        end_index = N-1;
    }

    if (N > 0) {
        quickselect(arr, 0, N-1, start_index);
        
        if (end_index > start_index) {
            quickselect(arr, start_index+1, N-1, end_index);
        }

        int size_page = end_index - start_index + 1;
        long long *page = arr + start_index;
        qsort(page, size_page, sizeof(long long), compare);

        for (int i = 0; i < size_page; i++) {
            printf("%lld\n", page[i]);
        }
    }

    if (arr) free(arr);
    return 0;
}
