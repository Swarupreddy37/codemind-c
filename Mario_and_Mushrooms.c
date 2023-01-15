#include<stdio.h>
int main()
{
    int n,a=1;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("NORMAL");
        return 0;
    }
    else
    {
        a=a+n;
        if(a%3==0)
        {
            printf("SMALL");
            return 0;
        }
        else
        {
            printf("HUGE");
            return 0;
        }
    }
}