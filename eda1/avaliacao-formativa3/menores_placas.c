#include <stdio.h>

int main() {
    int operacao, placa, k;
    int menores_placas[101];
    int total_placas = 0;

    while (scanf("%d", &operacao) != EOF) {
        if (operacao == 1) {
            scanf("%d", &placa);
            if (total_placas < 100) {
                int pos = total_placas;
                while (pos > 0 && menores_placas[pos - 1] > placa) {
                    menores_placas[pos] = menores_placas[pos - 1];
                    pos--;
                }
                menores_placas[pos] = placa;
                total_placas++;
            } else {
                if (placa < menores_placas[99]) {
                    int j = 99;
                    while (j >= 0 && menores_placas[j] > placa) {
                        menores_placas[j + 1] = menores_placas[j];
                        j--;
                    }
                    menores_placas[j + 1] = placa;
                }
            }
        } else if (operacao == 2) {
            scanf("%d", &k);
            int n = k;
            if (n > total_placas) {
                n = total_placas;
            }
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    printf("%d", menores_placas[i]);
                } else {
                    printf(" %d", menores_placas[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
