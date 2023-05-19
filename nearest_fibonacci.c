#include<stdio.h>

int isfabnocci(int n) {
    int a = 0, b = 1, sum;
    for (int i = 0 ; ; i++) {
        sum = a + b;
        if (a == n) return a;
        if (a > n) return 0;
        a = b;
        b = sum;
    }
}

int main() {
    int n, p, q;
    scanf("%d",&n);
    for (int i = n - 1 ; i >= 0 ; i--) {
        p = isfabnocci(i);
        if (p) break;
    }
    for (int i = n + 1 ; ; i++) {
        q = isfabnocci(i);
        if (q) break;
    }
    if ((n - p) > (q - n)) printf("%d",q);
    else if ((n - p) == (q - n)) printf("%d %d",p, q);
    else printf("%d",p);
}