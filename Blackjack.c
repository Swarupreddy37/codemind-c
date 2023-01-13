#include<stdio.h>
int main()
{
    int n,m,a;
    scanf("%d%d",&n,&m);
    if(n+m>=11)
    {
        a=(21-(n+m));
        printf("%d",a);
    }
    else
    {
        printf("-1");
    }
}