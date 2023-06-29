#include<stdio.h>
int issqrt(int n) {
    if (n == 1) return 1;
    for (int i = 1 ; i < n ; i++) {
        if (i * i == n) return 1;
    }
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ; i < n ; i++)  scanf("%d",&a[i]);
    int s = 0;
    for (int i = 0 ; i < n ; i++) {
        if (issqrt(a[i])) s += a[i];
    }
    printf("%d", s);
}