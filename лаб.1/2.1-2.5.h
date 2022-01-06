#include <stdio.h>

//lab_1:  123,00123,058,-5, 0xaf, 0X0

//lab_2:  1,71,034159E1F, .005, 1234.56789L

void lab_3(){
    int a, b, c, d, e,q,k,g,f;
    a = 2;  b = 13;  c = 7;  d = 19;  e = -4;
    q = b % e;
    k = c % d-e;
    g = b % - e * c;
    f = d / a % c;
    printf("q = %d, k = %d, g = %d, f = %d",q,k,g,f);
}
void lab_4(){
    int a, c;
    c = 5;

//    c++;
//    a = 2*c;

//    c+=1;
//    a = c+c;
// 
//    ++c;
//    a = c+c;

    a = (c+=1)+c;

    printf("c = %d, a = %d",c,a);
}
void lab_5(){
    int a, c;
    c = 5;
//    --c;
//    a = c/2;
//    a = --c/2;
//    a = c--/2;
//    a = (c = c - 1)/2;
    a = (c -= 1)/2;
    printf("c = %d, a = %d",c,a);
}
