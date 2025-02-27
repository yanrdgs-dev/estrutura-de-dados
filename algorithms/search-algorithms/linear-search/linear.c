#include <stdio.h>

int linear_search(int arr[], int arr_size, int target) {
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(void) {

    int arr_test_1[5] = {1, 4, 4, 3, 10};
    int target_test_1 = 3;
    int n = (sizeof(arr_test_1) / sizeof(arr_test_1[0]));
    int arr_test_2[5] = {1, 2, 3, 4, 5};
    int target_test_2 = 6;

    int result1 = linear_search(arr_test_1, n, target_test_1);
    int result2 = linear_search(arr_test_2, n, target_test_2);

    printf("---- Teste 1 ----\n");
    printf("%d\n", result1);
    printf("---- Teste 2 ----\n");
    printf("%d\n", result2);
}
