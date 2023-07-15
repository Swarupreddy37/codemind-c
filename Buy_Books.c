#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], b[n];
    for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for (int i = 0 ; i < n ; i++) scanf("%d",&b[i]);
    int sum1 = 0, sum2 = 0;
    for (int i = 0 ; i < n ; i++) {
        sum1 += a[i];
        sum2 += b[i];
    }
    if (sum1 < sum2) printf("%d", sum2 - sum1);
    else printf("0");
}