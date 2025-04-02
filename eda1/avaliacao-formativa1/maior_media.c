#include <stdio.h>

int main (void) {
    int arr_size;
    scanf("%d", &arr_size);
    int arr[arr_size];

    for (int i = 0; i < arr_size; i++) {
        int val;    
        scanf("%d", &val);
        arr[i] = val;
    }

    long long soma = 0;
    for (int i = 0; i < arr_size; i++) {
        soma += arr[i];
    }

    int media = soma / arr_size;
    int printed = 0; 
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] > media) {
            if (printed) {
                printf(" ");
            }
            
            printf("%d", arr[i]);
            printed = 1;
        }
    }
    
    if (!printed) {
        printf("0");
    }
    
    printf("\n");
}