#include<stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d",&x);
    if(x%10==0)
    {
        a=x/10;
        printf("%d",a);
    }
    else
    {
        if(x%5==0)
        {
            c=x/10;
            b=c+1;
            printf("%d",b);
        }
        else
        {
            printf("-1");
        }
    }
}