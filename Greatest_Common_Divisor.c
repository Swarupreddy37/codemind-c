#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i>=1;i--)
    {
        if(n%i==0 && m%i==0)
        {
            printf("%d",i);
            return 0;
        }
    }
}