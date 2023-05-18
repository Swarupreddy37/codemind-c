#include<stdio.h>
int main() {
    char a[1000], p[4];
    scanf("%[^
]s",a);
    scanf("
");
    scanf("%s",p);
    int c = 0;
    for (int i = 0 ; a[i] != NULL ; i++) {
        if (a[i] == p[0]){
            c++;
        }
    }
    if (c == 0) printf("-1");
    else printf("%d",c);
}