#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int qtd_fileiras, qtd_cadeiras;
    scanf("%d %d", &qtd_fileiras, &qtd_cadeiras);
    char cinema[qtd_fileiras][qtd_cadeiras][3];

    for (int i = 0; i < qtd_fileiras; i++) {
        for (int j = 0; j < qtd_cadeiras; j++) {
            strcpy(cinema[i][j], "--");
        }
    }

    char cadeira[10];
    
    while(scanf("%s", cadeira) != EOF) {
        int fileira = cadeira[0] - 'A';
        
        int coluna = atoi(cadeira + 1) - 1;

        if (fileira >= 0 && fileira < qtd_fileiras && coluna >= 0 && coluna < qtd_cadeiras) {
            strcpy(cinema[fileira][coluna], "XX");
        }
    }

    printf("  ");
    for (int j = 1; j <= qtd_cadeiras; j++) {
        printf(" %02d", j);
    }
    printf("\n");

    for (int i = qtd_fileiras - 1; i >= 0; i--) {
        char fileira = 'A' + i;
        printf("%c", fileira);
        printf(" ");
        for (int j = 0; j < qtd_cadeiras; j++) {
            printf(" %s", cinema[i][j]);
        }
        printf("\n");
    }
}