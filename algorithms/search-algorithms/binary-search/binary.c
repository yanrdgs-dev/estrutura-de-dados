#include <stdio.h>
#include <math.h>

int binary_search (int arr[], int hi, int target) {
    int lo = 0;
    while (lo <= hi) {
        int mid = floor((hi + lo) / 2);
        int value = arr[mid];

        if (value == target) {
            return mid;
        } else if (value > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return -1;
}

int main(void) {
    int arr_test_1[5] = {1,2,3,4,5};
    int size_arr = sizeof(arr_test_1) / sizeof(arr_test_1[0]);
    int target_test_1 = 2;

    int arr_test_2[5] = {5,6,8,9,10};
    int target_test_2 = 7;

    printf("---- Teste 1 ----\n");
    int result_1 = binary_search(arr_test_1, size_arr - 1, target_test_1);
    printf("%d\n", result_1);
    printf("---- Teste 2 ----\n");
    int result_2 = binary_search(arr_test_2, size_arr - 1, target_test_2); 
    printf("%d\n", result_2);

    return 0;
}