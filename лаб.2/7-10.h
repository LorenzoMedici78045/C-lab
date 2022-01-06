#include <stdio.h>

void lab_7() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0 | b % 2 == 0 | c % 2 == 0)
        printf("Имеется");
    else
        printf("Не имеется");
}

void lab_8() {
    int x, e, f;
    printf("Введите промежуток\n");
    scanf("%d %d", &e, &f);
    for (int i = 0; i < 3; i++) {
        printf("Введите %d число\n", i + 1);
        scanf("%d", &x);
        if (e <= x && x <= f)
            printf("%d лежит в указанном промежутке\n", x);
    }
}

void lab_9() {
    int x;
    printf("Введите трехзначное число\n");
    scanf("%d", &x);
    if (x / 100 == x % 100 / 10 | x / 100 == x % 10 | x % 100 / 10 == x % 10)
        printf("Есть повторяющиеся цифры");
    else
        printf("Нет повторяющихся цифр");
}

void lab_10() {
    int x, k;
    for (int i = 0; i < 3; i++) {
        printf("Введите %d число\n", i + 1);
        scanf("%d", &x);
        if (i == 0)
            k = x;
        if (x > k && i != 0)
            k = x;
    }
    printf("Наибольшее число: %d \n", k);
}