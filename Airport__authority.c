#include<stdio.h>
int main() {
    int n, m, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0 ; i < n ; i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for (int i = 0 ; i < n ; i++) {
        if (a[i] > m) sum += 2;
        else sum++;
    }
    printf("%d",sum);
}