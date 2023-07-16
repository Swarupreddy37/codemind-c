#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0 ; i < t ; i++) {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s", a);
        int c = 0;
        for (int j = 0 ; j < n ; j++) {
            if (a[j] == '1') { 
                c++;
                for (int k = j + 1 ; k < n ; k++) {
                    if (a[k] == '1') c++;
                }
            }
        }
        printf("%d
", c);
    }
}