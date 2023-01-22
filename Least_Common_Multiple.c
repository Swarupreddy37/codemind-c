#include<stdio.h>
int main()
{
    int n,m,p,q,max,min,i;
    scanf("%d%d",&n,&m);
    max=(n>m)?n:m;
    i=max;
    min=(n>m)?m:n;
    while(max%min!=0)
    {
        max+=i;
    }
    printf("%d",max);
}