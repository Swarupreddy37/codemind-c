#include<stdio.h>
int main()
{
    int x,a,b,n;
    scanf("%d%d%d",&x,&a,&b);
    n=a*1+b*2;
    if (n>=x) printf("Qualify");
    else printf("Not Qualify");
}