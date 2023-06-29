#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], b[n], j = 0;
    for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for (int i = n - 1 ; i >= n / 2 ; i--, j++) {
        b[j] = a[i];
    }
    for (int i = 0 ; i < n / 2 ; i++, j++) b[j] = a[i];
    for (int i = 0 ; i < n ; i++) printf("%d ", b[i]);
}