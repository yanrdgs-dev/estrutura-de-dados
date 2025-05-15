#include <stdio.h>
#include <stdlib.h>

void merge (int *v, int e, int m, int d) {
    int *aux = malloc((d - e + 1) * sizeof(int)); // vetor auxiliar

    for (int i = e; i <= d; i++) {
        aux[i - e] = v[i]; // copia tudo pro vetor auxiliar
    }

    int i = e; // declara indices p poder manipular
    int j = m + 1;
    int k = e;

    while (i <= m && j <= d) { // enquanto nenhuma das duas metades já foi iterada ou de (e..m) ou de (m+1..d)
        if (aux[i - e] <= aux[j - e]) { // se v[i] for menor ou igual a v[j] (<= mantém a ordem, algoritmo estavel),
            v[k] = aux[i - e]; // o v[k], ou seja, o indice k do v vira o v[i]
            i++; // incrementa o i pq passou por ele já
        } else {
            v[k] = aux[j - e]; // indice k do v vira o v[j]
            j++; // incrementa o j, idem
        }
        k++; // incrementa o k no final pois significa que aquela posição já ta ordenada
    }

    while (i <= m) { // se entra nisso significa q a segunda metade foi toda iterada primeiro, então ainda falta elemento da primeira
        v[k] = aux[i - e];
        i++, k++;
    }
    
    while (j <= d) { // idem: linha 26 porem ao contrario
        v[k] = aux[j - e];
        j++, k++;
    }

    free(aux); // limpa vetor auxiliar p nao dar memory leak
}

void mergesort(int *v, int e, int d) {
    if (e >= d) return; // caso base (apenas 1 elemento no subvetor, e >= d)

    else {
        int m = (e + d) / 2; // declara qual o meio do meu subvetor
        mergesort(v, e, m); // roda mergesort pra primeira metade do subvetor
        mergesort(v, m + 1, d); // roda mergesort para segunda metade do subvetor

        merge(v, e, m, d); // faz a operação de intercalar os índices para os subvetores
    }
}


int main(void) {
    int n;
    printf("Qual o tamanho do vetor que deseja ordenar? ");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));
    printf("Vetor alocado com tamanho %d. \n", n);

    printf("Digite os valores do vetor: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    printf("\n");

    printf("Vetor v antes de ordenar: \n");
    for (int i = 0; i < n; i++) {
        printf("v[%d]: %d ", i, v[i]);
    }
    printf("\n");

    mergesort(v, 0, n - 1);

    printf("Vetor v ordenado: \n");
    for (int i = 0; i < n; i++) {
        printf("v[%d]: %d ", i, v[i]);
    }
    printf("\n");
}
