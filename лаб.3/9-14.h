
#define True 1
#define False 0

void t_9() {
    int n, a[15], i, k;
    scanf("%d", &n);
    k = 0;
    while (n) {
        a[k] = n % 10;
        n /= 10;
        k++;
    }
    n = 0;
    for (i = k - 1; i > -1; --i)
        if (a[i] != 0 && a[i] != 5)
            n = n * 10 + a[i];
    printf("%d", n);
}

void t_10() {
    int n, del = 1;
    scanf("%d", &n);
    while (del <= n) {
        if (n % del == 0)
            printf("%d ", del);
        del += 1;
    }
}

void t_11() {
    int n;
    scanf("%d", &n);
    for (int q = 2; power(q, 3) <= n; q++) {
        if (n % power(q, 2) == 0 && n % power(q, 3) != 0) {
            printf("%d ", q);
        }
    }
}

void t_12() {
    int m, k = 1;
    scanf("%d", &m);
    while (power(4, k + 1) < m) {
        k += 1;
    }
    printf("%d", k);
}

void t_13() {
    int p = 2, n, k, m;
    scanf("%d", &n);
    while (n > 0) {
        k = 0;
        m = p;
        while (m > 1) {
            if (p % m == 0)
                k++;
            if (k > 1)
                break;
            m--;
        }
        if (k == 1) {
            printf("%d ", p);
            n--;
        }
        p++;
    }
}

void t_14() {
    int n, k, f1 = 1, f2 = 1, m;
    scanf("%d", &n);
    printf("1 1 ");
    for (k = 2; k < n; ++k) {
        m = f1 + f2;
        f1 = f2;
        f2 = m;
        printf("%d ", f2);
    }
}
