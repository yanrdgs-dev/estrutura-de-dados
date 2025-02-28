#include <stdio.h>

void selection_sort(int arr[], int arr_len) {
    for (int i = 0; i < arr_len; i++) {
        int min_idx = i;

        for (int j = i + 1; j < arr_len; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        int tmp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = tmp;
    }
}

void print_arr(int arr[], int arr_len) {
    for (int i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main (void) {
    int array[5] = {10, 5, 3, 8, 4};
    int array_len = sizeof(array) / sizeof(array[0]);

    printf("--- Array sem ordenação ---\n");
    print_arr(array, array_len);
    printf("--- Array após ordenação ---\n");
    selection_sort(array, array_len);
    print_arr(array, array_len);
}