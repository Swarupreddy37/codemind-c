#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n], min = 0;
    for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for (int i = 0 ; i < n ; i++) {
        if (min < a[i]) min = a[i];
    }
    for (min ; min > 0 ; min--) {
        int b = 0;
        for (int i = 0 ; i < n ; i++) {
            if (a[i] % min == 0) b++;
        }
        if (b == n) {
            printf("%d", min);
            break;
        }
    }
}