#include <stdio.h>
#include <ctype.h>

const int L = 50;

void get_type(int);

int _main() {
    char str[L];
    int i = 0;
    printf("Ввод строки:\n");
    gets(str);
    while (str[i] != '\0') {
        check_type(str[i]);
        i++;
    }
}

void get_type(int c) {
    if (isdigit(c))
        printf("%c - цифра, печатаемый символ.\n", c);
    else if (islower(c))
        printf("%c - буква, строчная, печатаемый символ.\n", c);
    else if (isupper(c))
        printf("%c - буква, заглавная, печатаемый символ.\n", c);
    else if (isspace(c))
        printf("%c - пробел, печатаемый символ.\n", c);
    else if (isprint(c))
        printf("%c - знак, печатаемый символ.\n", c);
    else
        printf("%c - непечатаемый символ.\n", c);
}


