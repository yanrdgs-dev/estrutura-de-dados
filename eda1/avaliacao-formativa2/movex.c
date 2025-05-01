#include <stdio.h>
#include <string.h>

void append_x(char *output, int idx, int count) {
    if (count == 0) {
        output[idx] = '\0';
        return;
    }
    output[idx] = 'x';
    append_x(output, idx + 1, count - 1);
}

void mover_x(char *input, char *output, int *pos_normal, int *x_count) {
    if (*input == '\0') {
        append_x(output, *pos_normal, *x_count);
        return;
    }

    if (*input == 'x') {
        (*x_count)++;
    } else {
        output[*pos_normal] = *input;
        (*pos_normal)++;
    }

    mover_x(input + 1, output, pos_normal, x_count);
}

int main() {
    char input[101];
    char output[101];
    int pos_normal = 0, pos_x = 0;

    scanf("%s", input);
    mover_x(input,output, &pos_normal, &pos_x);

    printf("%s\n", output);

}