#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != 0 && a[i] != 1)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
}