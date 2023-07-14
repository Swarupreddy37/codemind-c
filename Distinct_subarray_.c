#include<stdio.h>
int main() {
    int n, m;
    scanf("%d%d",&n, &m);
    int a = 0, b = 0;
    for (int i = n ; i <= m ; i++) {
        if (i % 2 == 0) a++;
        else b++;
    }
    printf("%d", b + (a * b));
}