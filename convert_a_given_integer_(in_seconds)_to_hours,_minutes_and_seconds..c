#include<stdio.h>
int main()
{
    int v,h,m,s;
    scanf("%d",&v);
    h=v/3600;
    m=(v%3600)/60;
    s=(v%3600)%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}