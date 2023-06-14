#include<stdio.h>
#include<stdlib.h>
int main() {
    char a[5];
    int b[4];
    scanf("%s", a);
    for (int i = 0 ; i < 5 ; i++) {
        switch (a[i]) {
            case '0' : b[i] = 0;
                      break;
            case '1' : b[i] = 1;
                       break;
            case '2' : b[i] = 2;
                       break;
            case '3' : b[i] = 3;
                       break;
            case '4' : b[i] = 4;
                       break;
            case '5' : b[i] = 5;
                       break;
            case '6' : b[i] = 6;
                       break;
            case '7' : b[i] = 7;
                       break;
            case '8' : b[i] = 8;
                       break;
            case '9' : b[i] = 9;
                       break;
            default : b[i] = 10;
                       break;
        }
    }
    int p = b[0] * 10 + b[1];
    int q = b[3] * 10 + b[4];
    float x = 6 * q, y = (30 * p) + (q * 0.5), z;
    if (x > y) z = x - y;
    else z = y - x;
    if (z < 180) printf("%.1f", z);
    else printf("%.1f", 360 - z);
}