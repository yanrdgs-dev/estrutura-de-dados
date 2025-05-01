#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo) {
    if (primeiro >= ultimo) return 1;

    int soma_extremo = v[primeiro] + v[ultimo];
    int soma_proximo = v[primeiro + 1] + v[ultimo - 1];

    if (soma_extremo != soma_proximo) return 0;

    return pa_recursiva(v, primeiro + 1, ultimo - 1);
}