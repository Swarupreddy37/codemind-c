#include<stdio.h>
int main()
{
    int n,s,t,u,d;
    scanf("%d",&n);
    s=(n*(n+1))/2;
    t=(s*s);
    u=(n*(n+1)*((2*n)+1))/6;
    if(u>t)
    {
        d=(u-t);
        printf("%d",d);
    }
    else
    {
        d=(t-u);
        printf("%d",d);
    }
}