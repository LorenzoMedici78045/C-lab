
#define True 1
#define False 0



void t_16() {
    float num, eps = 0.01;
    scanf("%f", &num);
    float root = num / 2;
    int i = 0;
    while (root - num / root > eps) {
        i++;
        root = 0.5 * (root + num / root);
    }
    printf("%f %f", num, root);
}

void t_19() {
    int n, j, i;
    scanf("%d", &n);
    for (i = 6; i < n; i++) {
        int sum = 1;
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            printf("%d ", i);
    }
}

void t_20(){
    int p=3, n;
    scanf("%d", &n);
    while (p+2<n){
        if (is_prime(p) && is_prime(p+2))
            printf("(%d %d) ", p, p+2);
        p+=1;
    }
}
