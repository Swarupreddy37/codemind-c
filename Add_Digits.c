#include<stdio.h>
int main()
{
    int n,rem,sum,add=0;
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    n=sum;
    }
    printf("%d",n);
}