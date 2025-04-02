#include <stdio.h>

int n;

void printMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void preencheMatriz(int n, int matriz[n][n]) {
    int camada_total = (n + 1) / 2;

    for (int camada = 0; camada < camada_total; camada++) {
        int val = camada + 1;

        for (int j = camada; j < n - camada; j++) {
            matriz[camada][j] = val;
        }

        for (int j = camada; j < n - camada; j++) {
            matriz[n - camada - 1][j] = val;
        }

        for (int i = camada; i < n - camada; i++) {
            matriz[i][camada] = val;
        }

        for (int i = camada; i < n - camada; i++) {
            matriz[i][n - camada - 1] = val;
        }
    }
}


int main(void) {
    scanf("%d", &n);
    int matriz[n][n];   

    preencheMatriz(n, matriz);
    printMatriz(n, matriz);
}