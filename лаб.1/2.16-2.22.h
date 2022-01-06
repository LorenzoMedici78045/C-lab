#include <stdio.h>
#include <math.h>
#include <time.h>

float lab_16() {
    float x;
    scanf("%f", &x);
    return 2 * powf(x, 4) - 3 * powf(x, 3) + 4 * powf(x, 2) - 5 * x + 6;
}

void lab_17() {
    int k, x;
    scanf("%d", &x);
    k = x % 1000 / 100;
    printf("k = %d", k);
}

void lab_18() {
    int k = 0, x;
    scanf("%d", &x);
    while (x > 0) {
        k += x % 10;
        x /= 10;
    }
    printf("%d", k);
}

void lab_19() {
    int k;
    float x;
    scanf("%f", &x);
    k = (int) (x * 10) % 10;
    printf("%d", k);
}

void lab_20() {
    int k = 0, x, i = 2;
    scanf("%d", &x);
    while (i >= 0) {
        k += (x % 10) * powf(10, i--);
        x /= 10;
    }
    printf("%d", k);
}


void lab_21() {
    int s, m, y;
    scanf("%d", &s);
    y = s / 3600;
    m = s % 3600 / 60;
    printf("Прошло: %d-hours, %d-minutes", y, m);
}

void lab_22() {
    float x, x_2=1,x_21=1;
    scanf("%f", &x);
    for (int i=1; i <= 4; i++)
        x_21*=(x_2 *= x*x);
    printf("x^21 за 6 операций =%f\n", x_21*x);
}