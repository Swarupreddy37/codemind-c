#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], num = 0, b[n + 1];
    for (int i = 0 ; i  < n ; i++) scanf("%d",&a[i]);
    for (int i = 0 ; i < n ; i++) {
        num = num * 10 + a[i];
    }
    num++;
    int j = 0;
    while (num > 0) {
        b[j] = num % 10;
        j++;
        num /= 10;
    }
    for (int i = j - 1 ; i >= 0 ; i--)
    printf("%d ",b[i]);
}