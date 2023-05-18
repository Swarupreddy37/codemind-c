#include<stdio.h>
int main() {
    char a[1000];
    scanf("%[^
]s",a);
    int s = 0;
    for (int i = 0 ; a[i] != NULL ; i++) {
         if (a[i] >= '1' && a[i] <= '9') {
             s += (a[i] - '0');
            // printf("%d",(a[i] - '0'));
         }
    }
    printf("%d",s);
}