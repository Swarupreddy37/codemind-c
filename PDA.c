#include<stdio.h>
int main()
{
    int n,i,sum=0,tem;
    //tem=n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("PERFECT");
    }
    else if(n < sum)
    {
        printf("ABUNDANT");
    }
    else
    {
        printf("DEFICIENT");
    }
}