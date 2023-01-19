#include<stdio.h>
int main()
{
    int n,k,m,a,b,c;
    scanf("%d%d%d",&n,&k,&m);
    a=k*m;
    if(n%a==0)
    {
        b=n/a;
        printf("%d",b);
    }
    else
    {
        b=n/a;
        c=(b+1);
        printf("%d",c);
    }
}