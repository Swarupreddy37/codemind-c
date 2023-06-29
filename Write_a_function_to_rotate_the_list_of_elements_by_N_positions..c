#include<stdio.h>
int main() {
    int n, m, q;
    scanf("%d",&n);
    int a[n], b[n];
    for (int i = 0 ; i < n ; i++) scanf("%d", &a[i]);
    scanf("%d",&m);
    q = m % n;
    for (int i = 0 ; i < n ; i++) {
        int p = i + q;
        if (p < n) b[p] = a[i];
        else b[p - n] = a[i];
    }
    for (int i = 0 ; i < n ; i++) printf("%d ", b[i]);
}