
#define True 1
#define False 0

void t_1(int variant) {
    int n = 0, a, b, c;
    for (int i = 111; i <= 999; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if ((a == b | a == c | b == c) && variant == 1)
            n++;
        if (((a == b && c != b) | (b == c && a != b) | (a == c && a != b)) && variant == 2)
            n++;
    }
    printf("%d", n);
}

void t_2() {
    int n = 0, a, b, c;
    for (int i = 102; i <= 987; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a != b && a != c && b != c)
            n++;
    }
    printf("%d", n);
}

void t_3() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void t_4() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

int t_6() {
    int n, c = 1;
    scanf("%d", &n);
    while (c < n) {
        c *= 3;
    }
    if (c == n | n == 1)
        return True;
    else
        return False;
}

void t_7() {
    int s = 1, n = 1;
    float a;
    scanf("%f", &a);
    while (s <= a) {
        n += 1;
        s += 1 / n;
    }
    printf("%d", n);
}
