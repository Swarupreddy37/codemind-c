#include<stdio.h>
int main() {
    char a[1000];
    scanf("%s",a);
    int c = 0, max = 0;
    for (int i = 0 ; a[i] != NULL ; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')   c++;
        else {
            if (max < c) max = c;
            c = 0;
        }
    }
    if (max < c) max = c;
    printf("%d",max);
}