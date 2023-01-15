#include<stdio.h>
int main()
{
    int a,b,c,p,q,r,s;
    scanf("%d%d%d",&a,&b,&c);
    p=(a>b)?a:b;
    q=(a>b)?b:a;
    r=(q>c)?q:c;
    s=p+r;
    printf("%d",s);
}