#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ; i < n ; i++){ 
        scanf("%d",&a[i]);
    }
    for (int i = 0 ; i < n ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if (a[j] == a[i]) a[j] = -100 ;
        }
    }
    for (int i = 0 ; i < n ; i++) {
        if (a[i] != -100) printf("%d ", a[i]);
    }
}