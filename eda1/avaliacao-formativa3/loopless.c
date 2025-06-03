void insert(int *v, int pos) {
    if (pos <= 0 || v[pos] >= v[pos - 1]) return;

    int tmp = v[pos];
    v[pos] = v[pos - 1];
    v[pos - 1] = tmp;

    insert(v, pos - 1);
}

void ordena(int *v, int n) {
    if (n <= 1) return;

    ordena(v, n - 1);
    insert(v, n - 1);
}
