#include<stdio.h>
int main()
{
    int n,s,rem,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        rem=s%10;
        sum=sum+rem;
        s=s/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}