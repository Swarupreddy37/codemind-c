#include<stdio.h>
int main()
{
    int n,sum,pro,rem;
    scanf("%d",&n);
    sum=0,pro=1;
    while(n!=0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n=n/10;
    }
    if(sum==pro)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}