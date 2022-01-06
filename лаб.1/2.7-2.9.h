#include <stdio.h>

void lab_7() {
    int a, b, c, res;   a = 2;  b = 6;  c = 3;
    //    res = -  -  - a;
    //    res = a --- b;
    printf("res = %d", a);
}
void lab_8() {
    int  i, j, k, m;  char c, d;
    i = 1;
    j = 2;
    k = -7;
    m = 0;
    c = 'w';
    m = -i - 5 * j >= k + 1;
    // i + j++  + k = = -2*j;
    // m = 3 < j < 5;
    // m = 3 = = j < 5;
    // m = = c = 'w'
    // m = c != 87;
    // m = c = !87;
    // m = ! c = 87;
    // m = !c+87;
    // ! m = =c + 87;
    // m ! = c + 87;
    // k = = j - 9 = = i;
    // k *= 3 + j;
    // i + j = !k;
    // i += ++ j + 3;
    // k %= m = 1 + n / 2;
    // 1 + 3 * n += 7 / 5;
    // 1 + 3 * (n += 7) / 5;
    printf("res = %d", m);
}
//lab_9:
//not (not x) = x, не эквивалентно !, так как два отрицания дает то же число. Ответ: неверно
//x and true = x , and можно заменить на &&. Ответ: верно