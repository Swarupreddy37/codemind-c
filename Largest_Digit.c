#include<stdio.h>
int main()
{
    int n,rem,b=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        b=(rem>b)?rem:b;
        n=n/10;
    }
    printf("%d",b);
}