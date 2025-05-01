#include <stdio.h>
#include <string.h>

void inverter_palavra(char* palavra) {
    if (*palavra == '\0') return;
    else {
        inverter_palavra(palavra + 1);
        printf("%c", *palavra);
    }
}

int main() {
    char palavra[501];
    fgets(palavra, 501, stdin);
    int len = strlen(palavra);
    if (len > 0 && palavra[len - 1] == '\n') {
        palavra[len - 1] = '\0';
    }

    inverter_palavra(palavra);
    printf("\n");
}