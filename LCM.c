#include<stdio.h>
int main() {
    int n, m;
    scanf("%d%d",&n, &m);
    int max = (n > m) ? n : m;
    int c = max;
    int min = (n > m) ? m : n;
    while (max % min != 0) {
        max += c;
    }
    printf("%d",max);
}