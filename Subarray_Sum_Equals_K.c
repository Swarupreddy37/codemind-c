#include<stdio.h>
int main() {
    int n, m, c = 0;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0 ; i < n ; i++) scanf("%d", &a[i]);
    for (int i = 0 ; i < n ; i++) {
        int s = 0;
        for (int j = i ; j < n ; j++) {
            s += a[j];
            if (s == m) {
                c++;
                break;
            }
            else if (s > m) break;
        }
    }
    printf("%d",c);
}