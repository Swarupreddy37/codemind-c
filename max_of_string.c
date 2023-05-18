#include<stdio.h>
int main() {
    char a[100];
    scanf("%[^
]s",a);
    char max = a[0];
    for (int i = 0 ; a[i] != NULL ; i++) {
        if (max < a[i]) max = a[i];
    }
    printf("%c",max);
}