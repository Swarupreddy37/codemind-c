#include<stdio.h>
int main()
{
    int x,y,n,k,a,b,c,e,f;
    scanf("%d%d%d%d",&x,&y,&n,&k);
    if(n<=k)
    {
        e=n*x;
        printf("%d",e);
    }
    else
    {
        a=x*k;
        b=n-k;
        c=(x<y)?x:y;
        f=c*b;
        e=f+a;
        printf("%d",e);
    }
}