#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

int main() {
    int a = 10;
    int b = 5;

    printf("a - %d \n b - %d\n", a, b);
    swap(&a, &b);
    printf("a - %d \n b - %d\n", a, b);

}
