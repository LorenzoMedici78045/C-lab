#include <stdio.h>



void lab_12() {
    int x;
    scanf("%d", &x);
    if (x <= 5)
        printf("Увы рабочий день");
    else if (x == 6)
        printf("Можно и отдохнуть");
    else if (x == 7)
        printf("Завтра на работу");
}

void lab_13() {
    int x;
    scanf("%d", &x);
    if (x % 10 == 1)
        printf("%d рубль", x);
    else if (x % 10 >= 5 | x % 100 >= 10 && x % 100 <= 19)
        printf("%d рублей", x);
    else if (x % 10 > 1 && x % 10 < 5)
        printf("%d рубля", x);

}

void lab_14() {
    int key, minutes;
    scanf("%d %d", &key, &minutes);
    switch (key) {
        case 432:
            printf("Стоимость разговора 9,20 руб/мин: %.2f", 9.2 * minutes);
            break;
        case 95:
            printf("Стоимость разговора 4,10 руб/мин: %.2f", 4.1 * minutes);
            break;
        case 861:
            printf("Стоимость разговора 2,05 руб/мин: %.2f", 2.05 * minutes);
            break;
        case 844:
            printf("Стоимость разговора 2,5 руб/мин: %.2f", 2.5 * minutes);
            break;
        default:
            printf("Неправильный код города");
    }
}

void lab_15() {
    int m, n;
    scanf("%d %d", &m, &n);
    if ((m*60+n)*16 > 6*1024)
        printf("Места не хватит");
    else
        printf("Места хватит");
}

void lab_16(){
    int volume, fish_count, del_fish;
    scanf("%d %d", &volume, &fish_count);
    if (volume<fish_count*3) {
        if ((fish_count * 3 - volume) % 3 == 0)
            del_fish = (fish_count * 3 - volume) / 3;
        else
            del_fish = (fish_count * 3 - volume) / 3 + 1;
        printf("Аквариум перенаселен, нужно переселить %d рыб(ы)", del_fish);
    } else
        printf("Аквариум не перенаселен");
}